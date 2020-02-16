#include<stdio.h>

int main()
{
	int num;

	// num = 0;
	// 如果这里我们用的这种while循环，num=1的时候会陷入死循环 while (num < 100)
	for (num = 0; num < 100; num ++)
	{
		if (num % 2)
		{
			continue;
		}
		// num++;
	}


	return 0;
}
