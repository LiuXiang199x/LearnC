#include <stdio.h>
#define number 10

int main()
{
	int sum = 0;
	int i;

	for (i = 1; i < number; i++)
	{
		if ( i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		
	}

	printf("%d\n",sum);
	return 0;
}
