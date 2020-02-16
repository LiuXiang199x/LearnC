#include<stdio.h>

int main()
{
	char isRain, isFree;

	printf("Are your free?(Y/N)");
	scanf("%c", &isFree);

	getchar();

	printf("Is raining?(Y/N)");
	scanf("%c", &isRain);
	
	if (isFree == 'Y')
	{
		if (isRain == 'Y')
		{
			printf("Remenber to take the umbralle\n");
		}
	}	
	
	else
	{	
		printf("Girl is not free!\n");
	}
	

	return 0;
}
