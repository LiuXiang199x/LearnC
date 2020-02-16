#include<stdio.h>

int main()
{
	int number;
	int status;
	printf("input:");
	scanf("%d",&number);
	status = scanf("%d",&number);
	printf("status: %d\n",status);
	return 0;
}
