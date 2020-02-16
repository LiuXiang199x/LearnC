#include<stdio.h>

int main()
{
	int num =0;
	long sum = 0L; // 0L represent 0 of type"long"
	int status;

	do
	{
		printf("enter a number:");
		sum = sum+num;
		status = scanf("%d",&num);
		printf("the return value of function scanf is %d\n",status);
	}while(status == 1);

	printf("the result is %ld\n", sum);


	return 0;
}
