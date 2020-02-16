#include<stdio.h>

int main()
{
	int i;
	
	printf("How old are you:");
	scanf("%d", &i);

	if (i >= 18)
	{
		printf("You are aldut!\n");
	}
	else
	{
		printf("You are teenager!\n");
	}

	return 0;
}
