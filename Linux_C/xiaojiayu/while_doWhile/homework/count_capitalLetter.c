#include<stdio.h>
int main()
{
	int ch, count = 0;
	printf("please enter a frase:");

	while((ch = getchar())!='\n')
	{
		if(ch>='A'&&ch<='Z')
		{
			count=count + 1;
		}
	}

	printf("you have entered %d capital letter totally\n",count);

	return 0;
}
