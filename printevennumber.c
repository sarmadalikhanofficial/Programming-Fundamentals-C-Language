    // this for loop will print even numbers from 2 to 20

#include<stdio.h>
int main()
    // starting from s = 2, the condition s <= 20 ensures the loop runs until s is 20
    // s += 2 means s increases by 2 after each iteration, so only even numbers are printed
{
    for (int s = 2; s <= 10; s += 2)
    {																									
        printf("%d\n", s); // prints even number s
    }
    
    return 0;
}
