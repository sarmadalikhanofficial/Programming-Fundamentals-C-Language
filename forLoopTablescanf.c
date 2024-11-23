// Make a program that takes an input of a number and print its multiplication table.
//  (Multiply the number with the numbers from 1 to 10).


#include<stdio.h>  


int main()  
{  
   int n; // variable declaration  
   printf("Enter the value of n: ");  
   scanf("%d", &n); // Take input from the user
   
   // Displaying the multiplication tables.
   for(int i = 1; i <= n; i++){  // outer loop  
   printf("%d x %d = %d",n, i, n * i); // printing the value.  
   }


   return 0;  
}
