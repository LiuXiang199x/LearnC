#include<stdio.h>
#include<stdio.h>
#include<stdarg.h>

// 这个sum函数是一个可变函数，类似于我们的printf
int sum(int n, ...);    // 这里点点点意味着参数不确定

int sum(int n, ...)  // 想实现可变参数，用...来说明参数个数不确定
{
	int i, sum = 0;
	va_list vap;    // 这可变参数的一个类型，定义参数列表

	va_start(vap,n);  // 初始化参数列表, va_start必须要有两个参数，一个是刚刚定义的类型，第二个就是n。第一个参数不一定要是整型，也可以是字符串类型。比如printf第一个参数就是字符串类型。
	for(i=0;i<n;i++)
	{
		sum += va_arg(vap,int);  // 这个宏作用是获取参数的值，获取n，....后面每一个参数的值，每个参数是什么类型要写清楚（比如我们这里是int）
	}
	va_end(vap);
	
	return sum;
}

int main()
{
	int result;
	
	result = sum(3,1,2,3);
	printf("result1 = %d\n",result);

	result = sum(4,1,2,3,4);
	printf("result2 = %d\n",result);
	
	result = sum(5,1,2,3,4,5);
	printf("result3 = %d\n",result);
	return 0;
}
