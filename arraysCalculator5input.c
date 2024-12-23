#include <stdio.h>
#include <stdlib.h>

// Function prototypes for arithmetic operations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float result, num;
    char operator;
    
    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%f", &result);  // Initial value for result is the first number
    
    // Loop for 4 more operations (since we already took the first number)
    for (int i = 1; i < 5; i++) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);  // Space before %c to handle any newline characters
        
        printf("Enter the next number: ");
        scanf("%f", &num);  // Get the next number
        
        // Perform the operation based on the operator
        switch (operator) {
            case '+':
                result = add(result, num);
                break;
            case '-':
                result = subtract(result, num);
                break;
            case '*':
                result = multiply(result, num);
                break;
            case '/':
                if (num == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1; // Exit the program with an error code
                }
                result = divide(result, num);
                break;
            default:
                printf("Error: Invalid operator.\n");
                return 1; // Exit the program with an error code
        }
        
        // Display intermediate result after each operation
        printf("Intermediate result: %.2f\n", result);
    }

    // Output the final result
    printf("Final result: %.2f\n", result);

    return 0;
}

// Function definitions for arithmetic operations
float add(float a, float b) {
    return a + b; 
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
