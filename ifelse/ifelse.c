#include<stdio.h>

int main()
{
    int val1, val2, val3, sum;
    
    printf("Enter your English marks: ");
    scanf("%d", &val1);
    
    printf("Enter your Maths marks: ");
    scanf("%d", &val2);
    
    printf("Enter your Physics marks: ");
    scanf("%d", &val3);
    
    sum = val1 + val2 + val3;
    
    printf("Sum is %d \n" , sum);
    
    if(sum >= 400)  //sum greater than or equal to 270 (highest grade)
    {
        printf("Your Grade is A\n");
    }
    else if (sum >= 200)  //sum greater than or equal to 200
    {
        printf("Your Grade is B\n");
    }
    else if (sum >= 100)  //sum greater than or equal to 100
    {
        printf("Your Grade is C\n");
    }
    else
    {
        printf("Your Grade is F\n");  //if the sum is less than 100
    }


    return 0;
}
