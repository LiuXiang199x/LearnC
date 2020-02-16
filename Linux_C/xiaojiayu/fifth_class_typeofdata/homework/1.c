#include<stdio.h>
#include<math.h>
int main()
{
	/*
	int a,b,c,d,e,f;
	a = 1^2;
	b = 2^3;
	c = 3^4;
	d = 4^5;
	e = 5^6;
	f = a+b+c+d+e;
	*/
	int f;
	f = pow(1,2)+pow(2,3)+pow(3,4)+pow(4,5)+pow(5,6);
	
	printf("1^2+2^3+3^4+4^5+5^6= %d\n",f);
	return 0;


}
