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









// Q10. Write a program to input and display a 2D array of size 3x3?

#include <stdio.h>

int main() {
    int arr[3][3];  // Declare a 2D array of size 3x3
    
    // Input elements for the 2D array
    printf("Enter elements for the 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Display the 2D array
    printf("\nThe 3x3 array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}





// Q11. Write a program to find the maximum and minimum elements in a 2D array?

#include <stdio.h>

int main() {
    int arr[3][3], max, min;
    
    printf("Enter 9 elements for the 3x3 array:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    
    max = min = arr[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max)
		    max = arr[i][j];
            if (arr[i][j] < min)
		    min = arr[i][j];
        }
    
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}




// Q11. Write a program to find the maximum and minimum elements in a 2D array?
#include <stdio.h>

int main() {
    int arr[3][3], max, min;
    
    printf("Enter 9 elements for the 3x3 array:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    
    max = min = arr[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}



// Q12. Write a program that takes an array of integers 
//from the user and sorts it using Bubble Sort?

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








// Q13. What is the primary difference between fprintf() and fscanf()?

fprintf(): It is used for writing data to a file.
	   It works similarly to printf() but directs
	   the output to a file instead of the standard output (console).

Example:

FILE *file = fopen("file.txt", "w");
fprintf(file, "Hello, World!\n");
fclose(file);



fscanf(): It is used for reading data from a file.
	  It works like scanf() but reads input
          from a file instead of the standard input (keyboard).

Example:
FILE *file = fopen("file.txt", "r");
char str[50];
fscanf(file, "%s", str);
printf("%s", str);
fclose(file);










// Q14. Write a program to use fprintf()
// to write multiple lines of formatted data 
// (name, age, and address) to a file?


#include <stdio.h>

int main() {
    // Open the file in write mode
    FILE *file = fopen("data.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Define variables for name, age, and address
    char name1[] = "John Doe", name2[] = "Jane Smith", name3[] = "Alice Johnson";
    int age1 = 30, age2 = 25, age3 = 28;
    char address1[] = "123 Main St", address2[] = "456 Oak Rd", address3[] = "789 Pine Ave";
    
    // Writing formatted data to the file
    fprintf(file, "Name: %s, Age: %d, Address: %s\n", name1, age1, address1);
    fprintf(file, "Name: %s, Age: %d, Address: %s\n", name2, age2, address2);
    fprintf(file, "Name: %s, Age: %d, Address: %s\n", name3, age3, address3);

    // Close the file
    fclose(file);

    printf("Data successfully written to the file.\n");

    return 0;
}









// Q15. Write a C program to manage employee records using file handling with fprintf() and
// fscanf(). The program should support the following operations:
// 1. Add Employee Record
// Allow the user to enter the employee's name, ID, and salary, and write this information to a file
// named employees.txt using fprintf().
// 2. Display All Employee Records
// Read all records from the employees.txt file using fscanf() and display them.
// 3. Search Employee by ID
// Allow the user to search for an employee by their ID. If found, display the employee's name and
// salary. If not found, display an appropriate message


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee();
void displayEmployees();
void searchEmployeeByID();

int main() {
    int choice;
    
    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Employee Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployeeByID();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

void addEmployee() {
    FILE *file = fopen("employees.txt", "a");
    if (file == NULL) {
        printf("Unable to open file!\n");
        return;
    }

    struct Employee emp;
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    getchar(); // To consume newline character
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; // Remove newline character from name
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    fprintf(file, "%d,%s,%.2f\n", emp.id, emp.name, emp.salary);
    fclose(file);
    printf("Employee record added successfully.\n");
}

void displayEmployees() {
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Unable to open file!\n");
        return;
    }

    struct Employee emp;
    printf("\nEmployee Records:\n");
    while (fscanf(file, "%d,%49[^,],%f\n", &emp.id, emp.name, &emp.salary) != EOF) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

void searchEmployeeByID() {
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Unable to open file!\n");
        return;
    }

    int searchID;
    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);

    struct Employee emp;
    int found = 0;
    while (fscanf(file, "%d,%49[^,],%f\n", &emp.id, emp.name, &emp.salary) != EOF) {
        if (emp.id == searchID) {
            printf("Employee found: ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", searchID);
    }

    fclose(file);
}






// Q16. Write a C program that does the following:
// 1. Store Student Marks
// The program should prompt the user to enter the name and marks of 5 students, and store this
// data in a file called marks.txt using fprintf().
// 2. Read and Display Marks
// After storing the data, the program should read the content of the file using fscanf() and display
// the student names and marks

#include <stdio.h>

int main() {
    FILE *f = fopen("marks.txt", "a+");
    char name[50];
    int marks;
    int choice;

    printf("Do you want to:\n");
    printf("1. Store Student Marks\n");
    printf("2. Read and Display Marks\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Store student marks
        for (int i = 0; i < 5; i++) {
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter marks: ");
            scanf("%d", &marks);
            fprintf(f, "%s %d\n", name, marks);
        }
        printf("Marks have been stored successfully!\n");
    } 
    else if (choice == 2) {
        // Read and display marks
        fseek(f, 0, SEEK_SET);  // Move file pointer to the beginning
        printf("Student Marks:\n");
        while (fscanf(f, "%s %d", name, &marks) != EOF) {
            printf("%s %d\n", name, marks);
        }
    }
    else {
        printf("Invalid choice! Exiting...\n");
    }

    fclose(f);
    return 0;
}



















  
