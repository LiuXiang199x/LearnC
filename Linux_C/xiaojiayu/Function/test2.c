#include<stdio.h>

int max(int, int);  // 写声明的时候可以不写参数的名字，但一定要写参数的类型和数量

int max(int x, int y)
{
	if(x > y)
		return x;   // 这里有两个返回值，会返回两次吗？不会，！函数一旦遇到return语句就会立刻返回不会继续计算。
	else
		return y;
	printf("看看是否执行这句话\n");  /// 运行后会发现这句话根本没有执行
}

int main()
{
	int a, b, c;
	
	printf("please enter two number:");
	scanf("%d%d",&a,&b);

	c = max(a, b);
	printf("较大的值为：%d\n", c);

	return 0;
}
