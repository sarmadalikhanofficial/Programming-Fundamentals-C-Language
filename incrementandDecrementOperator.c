#include <stdio.h>

int main() {
    int a = 10;

    // Prefix Increment
    int b = ++a;  // a is incremented first, then assigned to b

    printf("After prefix increment, a = %d, b = %d\n", a, b); 

    // Resetting a
    a = 5;

    // Postfix Increment
    int c = a++;  // a is assigned to c first, then incremented

    printf("After postfix increment, a = %d, c = %d\n\n\n", a, c);

   

    int s = 11;

    // Prefix Decrement
    int r = --s;  // a is decremented first, then assigned to b
    printf("After prefix decrement, a = %d, b = %d\n", s, r); // a = 4, b = 4

    // Resetting a
    s = 6;

    // Postfix Decrement
    int e = s--;  // s is assigned to e first, then decremented
    printf("After postfix decrement, a = %d, c = %d\n", s, e); // a = 4, c = 5

    return 0;
}



