#include<stdio.h>

int main()
{
	int i = 5;
	
	while(i++)
	{
		if(i>10)
		{
			goto A;  // goto label;
		}
	}	
A:	printf("Here, i = %d\n",i);

	return 0;	
}
