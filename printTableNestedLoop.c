#include <stdio.h>

int main() {
    int s = 6; // the number for which we want to print the table

    // outer loop (optional if you want multiple tables later)
    for (int i = 1; i <= 1; i++) {
        // inner loop to print the multiplication table of 60
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", s, j, s * j);
        }
    }

    return 0;
}
