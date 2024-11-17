#include<stdio.h>

int main() 
{ 
    int a = 7;      // Declare integer a and initialize it with a
    int b = a;       // Declare integer b and initialize it with the value of a 
    
    b += a;           // Add the value of a to b and assign it back to b
  	a += b;           // Add the value of b to a and assign it back to a
    
    printf("my age is %d", a);   // Print the value of a
    
    return 0;
}
