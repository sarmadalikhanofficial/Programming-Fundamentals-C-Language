#include<stdio.h>  


int main()  
{  
   int n; // variable declaration  
   printf("Enter the value of n: ");  
   scanf("%d", &n); // Take input from the user
   
   // Displaying the multiplication tables.
   for(int i = 1; i <= n; i++)  // outer loop  
   {  
       for(int j = 1; j <= 10; j++)  // inner loop  
       {  
           printf("%d\t", (i * j)); // printing the value.  
       }  
       printf("\n");  
   }  


   return 0;  
}
