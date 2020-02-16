#include<stdio.h>
#include<math.h>
int main()
{

	printf("please enter a number:");
	int a;
	double b;
	scanf("%d", &a);
	b = pow (a,5);
	printf("the fifth power of %d is :%f\n", a, b);
	return 0;
}
