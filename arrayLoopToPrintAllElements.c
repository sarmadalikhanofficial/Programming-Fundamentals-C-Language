#include<stdio.h>

int main(){
	double prices[] = {2.0 , 10.0 , 15.0 , 25.0, 50.0, 100.0};
	
	printf("%d bytes\n", sizeof(prices));
//loop to print all array elements
	for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
	{
		printf("$%.2lf\n", prices[i]);
	}

}
