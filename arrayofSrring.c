//arrays of string
#include<stdio.h>
#include<string.h>
int main(){
		
	char cars[][10] = {"M5" , "BMW" , "Porsche"};
	strcpy(cars[0], "Tesla");
	
	for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
	{
		printf("%s\n", cars[i]);
	}
}
