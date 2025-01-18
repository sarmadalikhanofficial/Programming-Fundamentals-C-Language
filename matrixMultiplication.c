#include <stdio.h>

#define ROWS1 2
#define COLS1 2
#define ROWS2 2
#define COLS2 2

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2}, {3, 4}};
    int matrix2[ROWS2][COLS2] = {{5, 6}, {7, 8}};
    int result[ROWS1][COLS2] = {{0, 0}, {0, 0}};

    // Matrix multiplication
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
