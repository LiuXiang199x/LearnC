#include<stdio.h>

int main()
{
	int matrix[3][3] = {0};
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matrix[i][j] = getchar();
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{	
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
