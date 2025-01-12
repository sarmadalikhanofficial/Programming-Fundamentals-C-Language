#include <stdio.h>
#define MAX_ITEMS 5 //maximum number of items in each category

//declaring function prototypes
void displayMenu();
int handleOrder(); //this is the main function to handle the user's order
void addFastFood(int quantities[], int *totalBill);
void addBbq(int quantities[], int *totalBill);
void editQuantities(int quantities[], int prices[], char *items[], int *totalBill);

int main() {
    int totalBill = handleOrder(); // Call the main order handling function to process the user's order
    printf("\nYour total Bill Amount is Rs. %d\n", totalBill); // Print the total bill amount
    printf("Thank you for your order!\n"); // Print a thank-you message for the user
    return 0; //indicate successful execution
}

//function to display the welcome menu and instructions
void displayMenu() {
    printf("\n---------------- Welcome to Restaurant Billing System ----------------\n");
    printf("Please follow the instructions below:\n");
    printf("1. Press 's' to start your order.\n");
    printf("2. Choose between Fast Food and BBQ items.\n");
    printf("3. Finalize your order to get the total bill.\n\n");
}

//main order handling function
int handleOrder() {
    char choice;
    int totalBill = 0; //initialize total bill amount to zero
    int fastFoodQuantities[MAX_ITEMS] = {0}; //array to store fast food item quantities, initialized to zero
    int bbqQuantities[MAX_ITEMS] = {0};     //array to store BBQ item quantities, initialized to zero

    displayMenu(); //call the function to display the menu and instructions

    printf("Press 's' to start your order: ");
    scanf(" %c", &choice); // Read the user's input to start the order

    if (choice != 's' && choice != 'S') {
        //if the input is not 's' or 'S', display an error message and return zero
        printf("Invalid input! Please press 's' to start.\n");
        return 0;
    }

    //main loop to handle the order process
    while (1) {
        printf("\nSelect your item type:\n");
        printf("(1) Fast Food\n");
        printf("(2) BBQ\n");
        printf("(3) Finalize Order\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); //read the user's choice for item type

        if (choice == '1') {
            //if the choice is 1, call the function to add fast food items
            addFastFood(fastFoodQuantities, &totalBill);
        } else if (choice == '2') {
            //if the choice is 2, call the function to add BBQ items
            addBbq(bbqQuantities, &totalBill);
        } else if (choice == '3') {
            //if the choice is 3, break the loop and finalize the order
            break;
        } else {
            //if the input is invalid, display an error message
            printf("Invalid choice! Please try again.\n");
        }
    }

    return totalBill; //return the total bill amount
}

//function to handle Fast Food orders
void addFastFood(int quantities[], int *totalBill) {
    //arrays to store prices and names of fast food items
    int prices[MAX_ITEMS] = {1195, 1295, 2490, 699, 2699};
    char *items[MAX_ITEMS] = {"Zinger Burger", "Zinger Burger with extra Cheese", "Pizza", "Qtr Broast", "Full Broast"};
    int choice, quantity;

    //loop to display the menu and handle fast food orders
    while (1) {
        printf("\nFast Food Menu:\n");
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("(%d) %s : Price Rs. %d\n", i + 1, items[i], prices[i]); // Display the menu
        }
        printf("(6) Back to Main Menu\n");
        printf("Select an option (1-6): ");
        scanf("%d", &choice); //read the user's choice for fast food items

        if (choice >= 1 && choice <= MAX_ITEMS) {
            //if the choice is valid, read the quantity and update the total bill
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            quantities[choice - 1] += quantity;
            *totalBill += quantity * prices[choice - 1];
            printf("%d x %s added to your bill. Total so far: Rs. %d\n", quantity, items[choice - 1], *totalBill);

            //inner loop to offer editing and finalizing options
            while (1) {
                printf("\n(1) Edit Quantities\n");
                printf("(2) Finalize Order\n");
                printf("(3) Continue Ordering\n");
                printf("Select an option (1-3): ");
                int subChoice;
                scanf("%d", &subChoice); //read the user's choice for further actions

                if (subChoice == 1) {
                    //if the choice is 1, call the function to edit quantities
                    editQuantities(quantities, prices, items, totalBill);
                } else if (subChoice == 2) {
                    //if the choice is 2, finalize the order and return
                    printf("\nYour total Bill Amount is Rs. %d\n", *totalBill);
                    printf("Thank you for your order!\n");
                    return;
                } else if (subChoice == 3) {
                    //if the choice is 3, break the inner loop to continue ordering
                    break;
                } else {
                    //if the input is invalid, display an error message
                    printf("Invalid choice! Please try again.\n");
                }
            }
        } else if (choice == 6) {
            //if the choice is 6, break the loop to go back to the main menu
            break;
        } else {
            //if the input is invalid, display an error message
            printf("Invalid choice! Please try again.\n");
        }
    }
}

//function to handle BBQ orders
void addBbq(int quantities[], int *totalBill) {
    //arrays to store prices and names of BBQ items
    int prices[MAX_ITEMS] = {1269, 1245, 1299, 1245, 450};
    char *items[MAX_ITEMS] = {"Chicken Tikka", "Chicken Malai Boti", "Chicken Seekh Kabab", "Chicken Turish Kabab", "Chicken Reshmi Kabab"};
    int choice, quantity;

    //loop to display the menu and handle BBQ orders
    while (1) {
        printf("\nBBQ Menu:\n");
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("(%d) %s : Price Rs. %d\n", i + 1, items[i], prices[i]); // Display the menu
        }
        printf("(6) Back to Main Menu\n");
        printf("Select an option (1-6): ");
        scanf("%d", &choice); // Read the user's choice for BBQ items

        if (choice >= 1 && choice <= MAX_ITEMS) {
            //if the choice is valid, read the quantity and update the total bill
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            quantities[choice - 1] += quantity;
            *totalBill += quantity * prices[choice - 1];
            printf("%d x %s added to your bill. Total so far: Rs. %d\n", quantity, items[choice - 1], *totalBill);

            //inner loop to offer editing and finalizing options
            while (1) {
                printf("\n(1) Edit Quantities\n");
                printf("(2) Finalize Order\n");
                printf("(3) Continue Ordering\n");
                printf("Select an option (1-3): ");
                int subChoice;
                scanf("%d", &subChoice); //read the user's choice for further actions

                if (subChoice == 1) {
                    //if the choice is 1, call the function to edit quantities
                    editQuantities(quantities, prices, items, totalBill);
                } else if (subChoice == 2) {
                    //if the choice is 2, finalize the order and return
                    printf("\nYour total Bill Amount is Rs. %d\n", *totalBill);
                    printf("Thank you for your order!\n");
                    return;
                } else if (subChoice == 3) {
                    //if the choice is 3, break the inner loop to continue ordering
                    break;
                } else {
                    //if the input is invalid, display an error message
                    printf("Invalid choice! Please try again.\n");
                }
            }
        } else if (choice == 6) {
            //if the choice is 6, break the loop to go back to the main menu
            break;
        } else {
            //if the input is invalid, display an error message
            printf("Invalid choice! Please try again.\n");
        }
    }
}

//function to edit quantities of items
void editQuantities(int quantities[], int prices[], char *items[], int *totalBill) {
    //loop through each item to allow editing of quantities
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (quantities[i] > 0) {
            //display the current quantity for each item
            printf("%s - Current Quantity: %d\n", items[i], quantities[i]);
            printf("Enter new quantity (or leave empty to keep the same): ");
            int newQuantity;
            if (scanf("%d", &newQuantity) == 1) { //only update if the user inputs a number
                *totalBill -= quantities[i] * prices[i]; //subtract the old total for this item
                quantities[i] = newQuantity; //update the quantity
                *totalBill += newQuantity * prices[i]; //add the new total for this item
            }
        }
    }
    printf("Quantities updated. Total so far: Rs. %d\n", *totalBill); //display the updated total bill
}


