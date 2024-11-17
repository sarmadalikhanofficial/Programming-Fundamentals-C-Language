#include<stdio.h>
int main()
{
    // declare the variable s to store the user input
    int s;

    // prompt the user to enter the starting value for the countdown
    printf("enter the starting value for countdown: ");
    scanf("%d", &s);

    // this for loop will count down from the user-provided value to 1
    // condition: s >= 1 ensures the loop runs as long as s is greater than or equal to 1
    // s-- means s is decreased by 1 after each iteration, so we count down
    for (; s >= 1; s--) // initialization is omitted because s is already declared and assigned
    {
        printf("%d\n", s); // prints the current value of s
    }

    return 0; // exit the program
}
