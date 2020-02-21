#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int a;
	
	for (i = 0; i < argc; i++)
	{
		a = atoi(argv[i]); 
		sum = sum + a;
	}
	printf("sum = %d\n", sum);

	return 0;
}
