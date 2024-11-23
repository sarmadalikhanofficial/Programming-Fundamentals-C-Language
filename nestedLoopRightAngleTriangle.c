// Create a program to display a pattern of asterisks in the form of a right-angled triangle.
// Use a nested for loop to achieve this,the expected output for a triangle with 5 rows?


#include <stdio.h>


int main() {
    int rows;


    // Prompt user for the number of rows
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);


    // Generate the triangle pattern
    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }


    return 0;
}
