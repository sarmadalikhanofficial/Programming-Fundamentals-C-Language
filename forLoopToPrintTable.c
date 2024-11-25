#include <stdio.h>

int main() {
    int s, range;

    while (1) { // Infinite loop to keep asking the user
        printf("Enter the number you want to print the table for: ");
        scanf("%d", &s);

        printf("Enter the range up to which you want the table to be printed: ");
        scanf("%d", &range);

        printf("Multiplication Table of %d:\n", s);
        for (int i = 1; i <= range; i++) {
            printf("%d x %d = %d\n", s, i, s * i);
        }
        printf("\n");
    }

    return 0;
}
