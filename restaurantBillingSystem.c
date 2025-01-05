#include <stdio.h>

// Function prototype declaration for returnTotalBill
int returnTotalBill(void);

int main() {
        // Call the function returnTotalBill and store the result in totalBill
    int totalBill = returnTotalBill();
        // Print the total bill amount
    printf("Your total Bill Amount is %d\n", totalBill);
        // Print a thank you message
    printf("Thank you for your order!\n");
        // Return 0 to indicate successful execution
    return 0;
}

int returnTotalBill() {
    char c;                   // Variable to store user's choice to start the order
    char item;                // Variable to store user's choice of item type (Fast Food or BBQ)
    char fastFoodItem;        // Variable to store user's choice of Fast Food item
    int billAmount = 0;       // Variable to store the total bill amount
    char selectAgain;         // Variable to store user's choice to add more items
    char BbqItem;             // Variable to store user's choice of BBQ item
        // Print welcome message and instructions

    printf("----------------Welcome to Restaurant Billing System--------------\n");
    printf("--------------Please follow below instructions-----------\n");
    printf("Step 1 : Please press s to start your order\n");
    printf("Step 2 : You can order both Fast Food and BBQ item\n");
    printf("Step 3 : Please press a to select Fast Food item\n");
    printf("Step 4 : Please press b to select Bbq item\n");
    printf("Step 5 : You will get your final Bill after your order\n");
    start:      // Read the user's choice to start the order
    scanf(" %c", &c);
    if(c == 's' || c == 'S') {
        items:          // Prompt the user to select an item type
        printf("Please select your choice\n");
        printf("(a)Fast Food Items               (b)Bbq Items\n");
        scanf(" %c", &item);
        if(item == 'a' || item == 'A') {
            fastFoodList:               // List of Fast Food items and their prices
            printf("Please select 1, 2, 3, 4, 5 as per your choice\n");
            printf("(1) Zinger Burger : Price : Rs-450\n");
            printf("(2) Zinger Burger with extra Cheese : Price : Rs-500\n");
            printf("(3) Pizza : Price :  Rs-1400\n");
            printf("(4) Qtr Broast : Price : Rs-400\n");
            printf("(5) Full Broast: Price : Rs-1700\n");
            scanf(" %c", &fastFoodItem);
                        // Update bill amount based on user's selection
            if(fastFoodItem == '1') {
                billAmount += 450;
            }
            else if(fastFoodItem == '2') {
                billAmount += 500;
            }
            else if(fastFoodItem == '3') {
                billAmount += 1400;
            }
            else if(fastFoodItem == '4') {
                billAmount += 400;
            }
            else if(fastFoodItem == '5') {
                billAmount += 1700;
            }
            else {      // If an invalid choice is made, prompt the user to try again
                printf("You have entered wrong value, please try again!\n");
                goto fastFoodList;
            }
            printf("Do you want to add more items, y or n?\n");     // Ask the user if they want to add more items
            scanf(" %c", &selectAgain);
            if(selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            }
            else {
                return billAmount;
            }
        }
        else if(item == 'b' || item == 'B') {
            BbqItemList: // List of BBQ items and their prices
            printf("Please select 1, 2, 3, 4, 5 as per your choice\n");
            printf("(1) Chicken Tikka : Price : Rs-400\n");
            printf("(2) Malai Boti : Price : Rs-460\n");
            printf("(3) Seekh Kabab : Price :  Rs-350\n");
            printf("(4) Bihari Boti : Price : Rs-450\n");
            printf("(5) Reshmi Kabab : Price : Rs-450\n");
            // Update bill amount based on user's selection
            scanf(" %c", &BbqItem);
            if(BbqItem == '1') {
                billAmount += 400;
            }
            else if(BbqItem == '2') {
                billAmount += 460;
            }
            else if(BbqItem == '3') {
                billAmount += 350;
            }
            else if(BbqItem == '4') {
                billAmount += 450;
            }
            else if(BbqItem == '5') {
                billAmount += 450;
            }
            else {  // If an invalid choice is made, prompt the user to try again
                printf("You have entered wrong value, please try again!\n");
                goto BbqItemList;
            }   // Ask the user if they want to add more items
            printf("Do you want to add more items, y or n?\n");
            scanf(" %c", &selectAgain);
            if(selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            }
            else {
                return billAmount;
            }
        }
        else {  // If an invalid choice is made, prompt the user to try again
            printf("You have entered wrong value, please try again!\n");
            goto items;
        }
    }
    else {  // If the user does not press 's' to start, prompt to try again
        printf("You have entered wrong value, please press s!\n");
        goto start;
    }

    return billAmount;
}
