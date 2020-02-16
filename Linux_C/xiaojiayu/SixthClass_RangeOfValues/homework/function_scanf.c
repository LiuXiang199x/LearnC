#include<stdio.h>

int main()
{

	printf("Please enter two numbers(seperate with space) : ");
	int a, b;
	// & is location of variable a,can't put a,cause a is name of variable
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);

	return 0;
	
}
