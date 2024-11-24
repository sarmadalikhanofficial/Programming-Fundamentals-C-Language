#include<stdio.h>
int main()
{
   int n, sum;

   printf("Enter n value: \n");
   scanf("%d",&n);

    sum = 1;
    printf("%d",sum);
   for(int i=2; i<=n; i++)
   {
     printf("+%d",i);
     sum += i; //sum = sum + i;
   }

   printf("=%d",sum);

   return 0;
}
