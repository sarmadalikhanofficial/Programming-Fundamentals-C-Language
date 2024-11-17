#include<stdio.h>

int main()


{
	
	int val1;
	int val2;
	int val3;
	
	int sum;
	
	printf("Enter your English marks: ");
	scanf("%d",&val1);
	
	printf("Enter your Maths marks: ");
	scanf("%d",&val2);
	
	printf("Enter your Physics marks: ");
	scanf("%d",&val3);
	
	sum = val1 + val2 + val3;
	
	if(sum < 100) // if(statement)
	{
		printf("Failed");
		
	}
	
	else if(sum == 300)// else if(statement)
	
	{
		printf(" Your grade is A+");
		
	}
	else if(sum > 300) 
	{
		printf("invalid,,marks cannot exceed 300");
	}
		
	
	else if(sum >= 250)// else if(statement)
	
	{
		printf(" Your grade is A");
		
	}
	
	else if(sum >= 150)// else if(statement)
	
	{
		printf(" Your grade is B");
		
	}
	
	else if(sum >= 100)// else if(statement)
	
	{
		printf("Your grade is c ");
		
	}

	
}
