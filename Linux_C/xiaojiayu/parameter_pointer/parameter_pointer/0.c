#include<stdio.h>

void swap(int x, int y);
	
void swap(int x, int y)
{
	int temp;
	
	printf("before swap: x = %d, y = %d\n",x,y);
	temp = x;
	x = y;
	y = temp;
	
	printf("after swap: x = %d, y = %d\n",x,y);
}


int main()
{
	int x = 3, y = 5;
	
	printf("In main, before swap: x = %d, y = %d\n",x, y);
	swap(x, y);	
	printf("In main, after swap: x = %d, y = %d\n",x, y);
	

	return 0;
}
