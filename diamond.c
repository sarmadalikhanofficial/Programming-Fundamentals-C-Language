#include <stdio.h>

int main() {
    int n = 5;

    //Prints the upper part of the diamond
    for (int i = 1; i <= n; i++) {
        int j, k;
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
  
    
    // Prints the lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        int j, k; 
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}