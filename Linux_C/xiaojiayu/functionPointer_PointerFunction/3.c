#include<stdio.h>

int add(int, int);
int sub(int, int);

// 这个函数的参数是一个函数指针，也就是说这个函数的参数中的一个参数是一个函数的地址
int calc(int (*fp)(int, int), int, int);   // 这里两个参数都是int，说明不是指向add就是sub，第一个参数它是指向一个函数的地址，这个地址具备什么属性那么这个函数的参数就具备什么样的属性，必须返回一个整型值，有两个参数且都是整型

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int calc(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}

int main()
{
	printf("3 + 5 = %d\n", calc(add, 3, 5));
	printf("3 - 5 = %d\n", calc(sub, 3, 5));

	return 0;
}

