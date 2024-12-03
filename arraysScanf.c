#include <stdio.h>

int main() {
    int grades[4], n, i;

    printf("Enter 4 numbers:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &grades[i]); // Store each number in the array
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 4; i++) {
        printf("Element at index [%d] is %d\n", i, grades[i]); // Print each element
    }

    return 0;
}
