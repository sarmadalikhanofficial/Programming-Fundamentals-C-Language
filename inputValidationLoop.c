//Write an input validation loop that asks the user to enter a number in the range of 10 through 25
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number between 10 and 25: ");
        scanf("%d", &num);
    } while (num < 10 || num > 25);

    printf("You entered: %d\n", num);

    return 0;
}
