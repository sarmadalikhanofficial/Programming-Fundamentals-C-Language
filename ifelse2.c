#include<stdio.h>

int main()
{
    // declare variables to store marks for three subjects and their total
    int val1; // variable to store marks for english
    int val2; // variable to store marks for maths
    int val3; // variable to store marks for physics
    int sum;  // variable to store the total sum of marks

    // prompt user to enter marks for english and store the input
    printf("enter your english marks: ");
    scanf("%d", &val1);
    
    // prompt user to enter marks for maths and store the input
    printf("enter your maths marks: ");
    scanf("%d", &val2);

    // prompt user to enter marks for physics and store the input
    printf("enter your physics marks: ");
    scanf("%d", &val3);
    
    // calculate the total sum of marks
    sum = val1 + val2 + val3;

    // display the total sum of marks to the user
    printf("sum is: %d\n", sum);
    
    // determine the grade based on the total marks
    if(sum > 300) // check if total marks are greater than 300
    {
        printf("your grade is a"); // grade a for scores above 300
    }
    else if(sum > 200) // check if total marks are between 201 and 300
    {
        printf("your grade is b"); // grade b for scores between 201 and 300
    }	
    else if(sum > 100) // check if total marks are between 101 and 200
    {
        printf("your grade is c\n"); // grade c for scores between 101 and 200
    }
    else // default case for scores 100 or below
    {
        printf("your grade is f"); // grade f for scores 100 or less
    }

    return 0; // exit the program
}
