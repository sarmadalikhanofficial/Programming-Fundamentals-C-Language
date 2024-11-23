#include <stdio.h>

int main() {
int num1, num2, num3, sum, average;  
    printf("Enter value 1: ");
    scanf("%d", &num1);
    
    printf("Enter value 2: ");
    scanf("%d", &num2);
    
    printf("Enter value 3: ");
    scanf("%d", &num3);
    
    sum= num1 + num2 + num3;
    printf("Sum is %d\n",sum);
    
    average = (num1 + num2 + num3) / 3;
    printf("Avg is %d\n",average);
    
    if(sum % 2 == 0){
        printf("The sum of the numbers is even.\n");
    }else{
        printf("The sum of the numbers is odd.\n");
    }
    
    return 0;
}
