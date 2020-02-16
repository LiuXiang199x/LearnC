#include<stdio.h>

int main()
{
	printf("please enter a number:");
	float a, b;
	float c;
	scanf("%f", &a);
	printf("please enter another number:");
	scanf("%f", &b);
	
	c = a / b;
	
	printf("c = %.6f\n", c);
	return 0;
}
