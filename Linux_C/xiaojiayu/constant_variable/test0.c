#include<stdio.h>

int main()
{
	const float pi = 3.14; // 这里pi虽然是一个变量，但他已经失去了可修改能力。
	printf("%f\n", pi);
	
	pi = 3.1415;

	return 0;
}
