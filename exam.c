//Q1. Write a program to find the frequency of a character in a string?

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to read the string

    // Input character to find its frequency
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch); // Space before %c to ignore any leading whitespace

    // Count the frequency of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("Frequency of '%c': %d\n", ch, count);

    return 0;
}


//Q2. Write a program to convert all lowercase characters of a string to uppercase?
#include <stdio.h>
#include<string.h>

int main() {
    
    char string1 [] = "sxrmd";    
    
    strupr(string1); //converts a string to uppercase



	printf("%s", string1);


    return 0;
}


//Q3. Write a program to declare a pointer,
//assign it the address of an integer variable, and print
//the value using the pointer?

#include <stdio.h>

int main() {
    int num = 42;         // Declare an integer variable and assign a value
    int *ptr = &num;      // Declare a pointer and assign it the address of 'num'

    printf("Value of num using pointer: %d\n", *ptr); // Access the value using the pointer
    return 0;
}



































  
