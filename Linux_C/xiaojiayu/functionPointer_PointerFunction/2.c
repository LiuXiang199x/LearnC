#include<stdio.h>

int square(int);

int sqaure(int num)
{
	return num * num;
}

int main()
{
	// 我们这里不通过直接square 来调用函数，我们尝试用函数指针来调用函数
	int num;
	int (*fp)(int);  // 定义函数指针，并且带一个参数，int类型，这个函数是一个整型的返回值，所以和上面 int square是相符合的

	printf("please enter a int:");
	scanf("%d",&num);	

	fp = sqaure;	//这里是等价的，函数指针，指针指向的就是一个函数，这个函数拥有一个整型的返回值。square函数也是返回整型，所以是相符合。！！！！函数名经过运算，等于该函数的地址，和数组一致。

	printf("%d * %d = %d\n",num,num,(*fp)(num));
	
	return 0;
}

