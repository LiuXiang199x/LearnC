#include<stdio.h>

int main()
{
	int i;
	
	printf("Input the notes:");
	scanf("%d", &i);

	if (i >= 90)
	{
		printf("You get A!\n");
	}	
	
	else if(90 > i && i >= 80)
	{
		printf("You get B!\n");
	}

	else if(80 > i && i >= 70)
	{
		printf("You get C!\n");
	}

	else if(70 > i && i >= 60)
	{
		printf("You get D!\n");
	}

	else
	{
		printf("You get E!\n");
	}

	return 0;
}
