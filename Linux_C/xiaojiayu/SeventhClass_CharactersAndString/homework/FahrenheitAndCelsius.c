#include<stdio.h>

int main()
{
	printf("Please enter Fahrenheit: ");
	
	float a, b;

	scanf("%f",&a);
	b = (a-32)*5/9;
	printf("Celsius is %.2f\n",b);

	return 0;
}
