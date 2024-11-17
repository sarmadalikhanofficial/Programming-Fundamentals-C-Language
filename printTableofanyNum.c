#include<stdio.h>
int main()
{
    // this for loop will print the multiplication table of 5
    // starting from s = 1, the condition s <= 10 ensures the loop runs 10 times (from 1 to 10)
    // s++ increases s by 1 after each iteration to print each multiple of 5

    for (int s = 1; s <= 10; s++)
    {
        printf("10 * %d = %d\n", s, 10 * s); // prints multiplication table for 5
    }
    
    return 0;
}
