#include <stdio.h>

// Function to calculate sum of array elements using int a[]
int sum_with_array(int a[], int n) {
    int i, s = 0;
    for (i = 0; i < n; ++i)
        s += a[i];
    return s;
}

// Function to calculate sum of array elements using int *a
int sum_with_pointer(int *a, int n) {
    int i, s = 0;
    for (i = 0; i < n; ++i)
        s += a[i]; // Same as *(a + i)
    return s;
}

int main() {
    int arr[5];  // Array to store 5 elements
    int i, n = 5, sum1, sum2;

    // Input: Enter 5 integers
    printf("Enter %d integers for the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read input into array
    }

    // Calculate sum using the first function
    sum1 = sum_with_array(arr, n);

    // Calculate sum using the second function
    sum2 = sum_with_pointer(arr, n);

    // Output: Display the results
    printf("\nThe sum calculated using int a[] is: %d\n", sum1);
    printf("The sum calculated using int *a is: %d\n", sum2);

    return 0;
}
