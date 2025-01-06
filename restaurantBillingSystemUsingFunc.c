#include <stdio.h>
#define MAX_ITEMS 5

// Function prototypes
void displayMenu();
int handleOrder();
void addFastFood(int quantities[], int *totalBill);
void addBbq(int quantities[], int *totalBill);
void editQuantities(int quantities[], int prices[], char *items[], int *totalBill);

int main() {
    int totalBill = handleOrder(); // Call the main order handling function
    printf("\nYour total Bill Amount is Rs. %d\n", totalBill); // Print the total bill
    printf("Thank you for your order!\n"); // Print a thank-you message
    return 0; // Indicate successful execution
}

// Function to display the welcome menu and instructions
void displayMenu() {
    printf("\n---------------- Welcome to Restaurant Billing System ----------------\n"); 
    printf("Please follow the instructions below:\n"); 
    printf("1. Press 's' to start your order.\n"); 
    printf("2. Choose between Fast Food and BBQ items.\n"); 
    printf("3. Edit quantities during the process.\n"); 
    printf("4. Finalize your order to get the total bill.\n\n"); 
}

// Main order handling function
int handleOrder() {
    char choice;
    int totalBill = 0;
    int fastFoodQuantities[MAX_ITEMS] = {0}; // Array to store fast food item quantities
    int bbqQuantities[MAX_ITEMS] = {0};     // Array to store BBQ item quantities

    displayMenu(); // Display instructions

    printf("Press 's' to start your order: "); 
    scanf(" %c", &choice);

    if (choice != 's' && choice != 'S') { 
        printf("Invalid input! Please press 's' to start.\n");
        return 0; 
    }

    while (1) { 
        printf("\nSelect your item type:\n");
        printf("(1) Fast Food\n"); 
        printf("(2) BBQ\n");       
        printf("(3) Edit Quantities\n"); 
        printf("(4) Finalize Order\n");  
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == '1') { 
            addFastFood(fastFoodQuantities, &totalBill);
        } else if (choice == '2') { 
            addBbq(bbqQuantities, &totalBill);
        } else if (choice == '3') { 
            int fastFoodPrices[MAX_ITEMS] = {450, 500, 1400, 400, 1700}; 
            char *fastFoodItems[MAX_ITEMS] = {"Zinger Burger", "Zinger Burger with extra Cheese", "Pizza", "Qtr Broast", "Full Broast"};
            printf("Editing Fast Food Quantities:\n");
            editQuantities(fastFoodQuantities, fastFoodPrices, fastFoodItems, &totalBill);

            int bbqPrices[MAX_ITEMS] = {400, 460, 350, 450, 450}; 
            char *bbqItems[MAX_ITEMS] = {"Chicken Tikka", "Malai Boti", "Seekh Kabab", "Bihari Boti", "Reshmi Kabab"};
            printf("Editing BBQ Quantities:\n");
            editQuantities(bbqQuantities, bbqPrices, bbqItems, &totalBill);
        } else if (choice == '4') { 
            break;
        } else { 
            printf("Invalid choice! Please try again.\n");
        }
    }

    return totalBill; 
}

// Function to handle Fast Food orders
void addFastFood(int quantities[], int *totalBill) {
    int prices[MAX_ITEMS] = {450, 500, 1400, 400, 1700}; 
    char *items[MAX_ITEMS] = {"Zinger Burger", "Zinger Burger with extra Cheese", "Pizza", "Qtr Broast", "Full Broast"};
    int choice, quantity;

    while (1) {
        printf("\nFast Food Menu:\n"); 
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("(%d) %s : Price Rs. %d\n", i + 1, items[i], prices[i]);
        }
        printf("(6) Edit Quantities\n"); 
        printf("(7) Back to Main Menu\n");
        printf("Select an option (1-7): "); 
        scanf("%d", &choice);

        if (choice >= 1 && choice <= MAX_ITEMS) { 
            printf("Enter quantity: "); 
            scanf("%d", &quantity);
            quantities[choice - 1] += quantity; 
            *totalBill += quantity * prices[choice - 1]; 
            printf("%d x %s added to your bill. Total so far: Rs. %d\n", quantity, items[choice - 1], *totalBill);
        } else if (choice == 6) { 
            editQuantities(quantities, prices, items, totalBill);
        } else if (choice == 7) { 
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to handle BBQ orders
void addBbq(int quantities[], int *totalBill) {
    int prices[MAX_ITEMS] = {400, 460, 350, 450, 450}; 
    char *items[MAX_ITEMS] = {"Chicken Tikka", "Malai Boti", "Seekh Kabab", "Bihari Boti", "Reshmi Kabab"};
    int choice, quantity;

    while (1) {
        printf("\nBBQ Menu:\n"); 
        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("(%d) %s : Price Rs. %d\n", i + 1, items[i], prices[i]);
        } 
        printf("(6) Edit Quantities\n"); 
        printf("(7) Back to Main Menu\n");
        printf("Select an option (1-7): "); 
        scanf("%d", &choice);

        if (choice >= 1 && choice <= MAX_ITEMS) { 
            printf("Enter quantity: "); 
            scanf("%d", &quantity);
            quantities[choice - 1] += quantity; 
            *totalBill += quantity * prices[choice - 1]; 
            printf("%d x %s added to your bill. Total so far: Rs. %d\n", quantity, items[choice - 1], *totalBill);
        } else if (choice == 6) { 
            editQuantities(quantities, prices, items, totalBill);
        } else if (choice == 7) { 
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to edit quantities of items
void editQuantities(int quantities[], int prices[], char *items[], int *totalBill) {
    for (int i = 0; i < MAX_ITEMS; i++) { 
        if (quantities[i] > 0) { 
            printf("%s - Current Quantity: %d\n", items[i], quantities[i]);
            printf("Enter new quantity (or 0 to remove): ");
            int newQuantity;
            scanf("%d", &newQuantity);

            *totalBill -= quantities[i] * prices[i]; 
            quantities[i] = newQuantity; 
            *totalBill += newQuantity * prices[i]; 
        }
    }
    printf("Quantities updated. Total so far: Rs. %d\n", *totalBill); 
}


