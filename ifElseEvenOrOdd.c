#include <stdio.h>
int main() {
    int num;
    
    //input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    //check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
