#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("x is greater than y\n");
    }
    if (x < y) {
        printf("x is less than y\n");
    }
    if (x == y) {
        printf("x is equal to y\n");
    }

    printf("End of Program");

    return 0;
}
