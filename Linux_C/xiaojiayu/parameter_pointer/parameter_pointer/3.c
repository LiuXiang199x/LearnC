#include<stdio.h>

void get_array(int b[10]);

void get_array(int b[10])
{
	printf("sizeof b:%d\n",sizeof(b));
}

int main()
{
	int a[10] = {1, 2,3,4,5,6,7,8,9,0};
	
	printf("sizeof a:%d\n",sizeof(a));
	get_array(a);

	return 0;
}
