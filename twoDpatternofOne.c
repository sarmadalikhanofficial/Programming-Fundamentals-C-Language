#include <stdio.h>

int main() {
   
    int rows = 4;       // The number of rows in the pattern
    int columns = 3;    // The number of columns in each row
 
    for (int i = 0; i < rows; i++) {    // Loop for the rows
        for (int j = 0; j < columns; j++) {    // Loop for the columns in each row
            printf("1 ");    // Print '1' followed by a space
        }
        printf("\n");    // Print a new line after each row
    }
}
