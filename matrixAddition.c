#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];

    // Matrix addition
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
