#include<stdio.h>
int main()
{
    // this for loop will count down from 10 to 1
    // condition: s >= 1 ensures the loop runs as long as s is greater than or equal to 1
    // s-- means s is decreased by 1 after each iteration, so we count down

    for (int s = 1000; s >= 1; s--)
    {
        printf("%d\n", s); // prints the current value of s
    }
    
    return 0;
}
