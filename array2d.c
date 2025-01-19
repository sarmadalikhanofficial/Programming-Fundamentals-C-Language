//2d array
#include<stdio.h>

int main(){
	//1st method
	int numbers[2][3] = {	//2 rows and 3 coloumns
					{1 , 2 , 3},
					{1 , 2 , 3}
				  };
	
//	//2nd method	
//	int numbers[2][3];
//	numbers[0] [0] = 1;
//	numbers[0] [1] = 2;
//	numbers[0] [2] = 3;
//	numbers[1] [0] = 1;
//	numbers[1] [1] = 2;
//	numbers[1] [2] = 3;
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}	

}
