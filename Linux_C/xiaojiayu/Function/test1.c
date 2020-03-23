#include<stdio.h>

int sum(int n);

int sum(int n)  // 这里的n我们称为型参
{
	int result = 0;
	do
	{
		result += n;
	}while(n-- > 0);
	
	return result;  // 把result返回，如果是void，就不返回。把result返回，返回的是int类型（int sum）的int，
}

int main()
{
	int n, result;

	printf("please enter the value of n:");
	scanf("%d", &n);  // 这里用户实际输入的参数我们称为实参

	result = sum(n);   /// 这里是调用函数

	printf("1+2+3+4+....+(n+1)+n = %d\n",sum(n)); //这里写result或者sum（n）都是可以的

	return 0;
}
