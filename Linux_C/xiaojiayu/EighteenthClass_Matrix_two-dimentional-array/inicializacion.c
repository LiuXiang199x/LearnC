#include<stdio.h>

int main()
{

	int a[][2] = {1,2,3,4,5};
	//int a[3][4] = {a[1][1]=2,a[2][2]=3,a[0][0]=1};
		
	int i,j;	

	for (i = 0; i < 3;i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-d  ", a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
