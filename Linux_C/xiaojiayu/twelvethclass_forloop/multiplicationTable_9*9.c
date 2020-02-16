#include <stdio.h>

int main()
{
	int i, j, a;
	a = 0;
	for ( i = 1; i < 10; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			a = i*j;
			printf("%d*%d=%-2d   ", j, i, a);
		}
		putchar('\n');
	// 内层循环决定列，外层循环决定行，这里加一个putchar来打印一个换行
	}	
	
	return 0;
}
