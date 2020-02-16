#include<stdio.h>
	
int main()
{
	int a;
	int *p = &a;
	
	printf("please enter a number:");
	scanf("%d",&a);
	printf("a = %d\n",a);
	
	printf("enter another number:");
	scanf("%d",p);  // 如果这里&p  就是输入的指针p的地址
	printf("a = %d\n",a);

	return 0;
}
