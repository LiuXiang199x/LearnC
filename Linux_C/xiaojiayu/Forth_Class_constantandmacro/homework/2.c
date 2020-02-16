#include<stdio.h>

#define PI 3.14
#define S(r) PI*PI*3.14
#define C(r) PI*2*3.14

int main()
{
	
	int r = 5;
	printf("Area of circle is:%f\n",S(r));
	printf("Perimeter of circle is:%f\n",C(r));

	return 0;
}
