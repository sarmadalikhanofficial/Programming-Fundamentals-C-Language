#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Start of the program
    do {
        // Input two numbers
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        // Calculate the sum
        sum = num1 + num2;

        // Check the sum condition
        if (sum <= 20) {
            printf("The sum is %d, which is ≤ 20. Please enter the numbers again.\n", sum);
        } else {
            printf("The sum is %d, which is > 20.\n", sum);
        }

    } while (sum <= 20); // Loop continues while sum ≤ 20

    // End of the program
    printf("Exiting the program. Goodbye!\n");

    return 0;
}
