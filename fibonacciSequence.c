#include<stdio.h>
int main()
{
    int a = 0, b = 1, next;

    // this for loop prints the fibonacci sequence up to 100
    // condition: a <= 1000 ensures the loop stops when the next number in the sequence exceeds 1000

    for (int s = 1; a <= 1000; s++)
    {
        printf("%d ", a); // prints the current fibonacci number
        next = a + b;     // calculate the next number in the sequence
        a = b;            // update a to the previous number
        b = next;         // update b to the new number
    }
    
    return 0;
}
