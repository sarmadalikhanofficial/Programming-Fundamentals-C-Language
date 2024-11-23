//Write a C program that takes three integers as input from the user and Calculate and display the sum of the three numbers.
#include <stdio.h>

int main() {
int num1, num2, num3, sum;  
    printf("Enter value 1: ");
    scanf("%d", &num1);
    
    printf("Enter value 2: ");
    scanf("%d", &num2);
    
    printf("Enter value 3: ");
    scanf("%d", &num3);
    
    sum= num1 + num2 + num3;
    printf("Sum is %d",sum);
    return 0;
}
