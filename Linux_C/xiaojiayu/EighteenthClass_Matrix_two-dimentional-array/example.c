#include<stdio.h>

int main()
{
	int i,j;
	int a[4][5] = {
		{80,90,85,86,92},
		{89,78,99,80,76},
		{89,67,98,78,76},
		{67,87,89,78,78}
	};

	for (i = 0; i < 5;i++)
	{
		for (j = 0; j < 4;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
