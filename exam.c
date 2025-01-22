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







//Q4. Write a program to find the sum of all elements in an array using a pointer.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Array of integers
    int *ptr = arr;              // Pointer pointing to the first element of the array
    int sum = 0, i;

    // Calculate the sum using the pointer
    for (i = 0; i < 5; i++) {
        sum += *(ptr + i); // Access elements using the pointer
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}










// Q5. Write a program to input 5 integers into an array and display them?

#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Input 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the integers
    printf("The entered integers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}








// Q6. Write a program to sort an array in ascending order? (BUBBLESORT)

#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    // Input 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if elements are out of order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}









// Q7. Write a recursive function to find the factorial of a number?

#include <stdio.h>

// Recursive function to calculate factorial of a number
int factorial(int n) {
    if (n == 0)  // Base case: factorial of 0 is 1
        return 1;
    else  // Recursive case: factorial of n is n * factorial(n-1)
        return n * factorial(n - 1);
}

int main() {
    int result = factorial(9);  // Function call
    printf("Factorial: %d\n", result);
    return 0;
}









// Q8. Write a recursive function to find the sum of all elements in an array?

#include <stdio.h>

// Recursive function to find sum of elements in an array
int sumArray(int arr[], int n) {
    // Base case: if array is empty, return 0
    if (n <= 0) {
        return 0;
    } else {
        // Recursive case: sum of the current element and the sum of the rest of the array
        return arr[n-1] + sumArray(arr, n-1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in array
    int result = sumArray(arr, n);  // Function call to calculate sum
    printf("Sum of array elements: %d\n", result);  // Output the result
    return 0;
}




// Q9. Errors Finding?

// Syntax:

#include <stdio.h>
	int main() {
	int a = 5	//;
	printf("Value of a: %d\n", a);
	return 0;
}


// Logical:

#include <stdio.h>
	int main() {
	int a = 5, b = 10, sum;
	sum = a - b;	//+
	printf("The sum is: %d\n", sum);
	return 0;
}













  
