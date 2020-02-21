#include<stdio.h>

int main()
{
	char *p1[5] = {
		"hello",
		"hi",
		"hola",
		"buenas",
		"nihao"
	};
	
	int i;	
	
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p1[i]); // 这里不能写成*p1[i],加了*号表示取出字符，我们要得是字符串，所以要字符串的地址。
	}

	return 0;
}
