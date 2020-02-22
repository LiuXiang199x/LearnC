#include<stdio.h>

int main()
{
	char *array[5] = {"FishC", "Five", "Star", "Good", "WoW"};
	char *(*pointer)[5] = &array; /// 可以理解为  *pointer指向了一个指针数组中的一个指针，然后再* 解释该指针指向的字符串。
	int i, j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; (*pointer)[i][j] != '\0'; j++)	
		{
			printf("%c", (*pointer)[i][j]);
		}
		printf("\n");
	}

	return 0;
}
