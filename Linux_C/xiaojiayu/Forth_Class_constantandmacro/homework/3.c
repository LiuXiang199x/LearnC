#include<stdio.h>

#define tomato 3.7
#define kale 7
#define celery 1.3
#define spinach 8
#define onion 2.4
#define canola 9
#define cucumber 6.3
#define white_radish 0.5

int main()
{
	
	float price;

	price = (2*tomato+1*spinach+1*canola)/2;
	printf("Ming will pay for:%.2f yuan\n",price);
	
	price = (3*celery+0.5*onion+5*cucumber)/2;
	printf("Hong will pay for:%.2f yuan\n",price);

	price = (10*cucumber+20*white_radish)/2;
	printf("JiaYu will pay for:%.2f yuan\n",price);

	return 0;
}
