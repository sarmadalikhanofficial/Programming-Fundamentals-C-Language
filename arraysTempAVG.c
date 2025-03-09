#include <stdio.h>
int main()
{
	int temp[7];
	int i;
	float tot = 0;

	for (i = 0; i < 7; i++)
	{

		printf("\n Enter Temprature of day %d ..... ", i + 1);
		scanf("%d", &temp[i]);
		tot = temp[i] + tot;
	}
	tot = tot / 7;
	printf("\n The Average Temprature of the Week is  ....... %.2f ", tot);
}
