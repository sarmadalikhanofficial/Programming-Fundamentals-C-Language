#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;  // Changed variable name from 'operator' to 'op'

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    // Prompt for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to avoid issues with newline
    
    // Prompt for the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (op == '/') {
        // Check for division by zero
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        // Handle invalid operator
        printf("Error: Invalid operator entered. Use +, -, *, or /.\n");
    }

    return 0;
}
