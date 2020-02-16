/*
要求 A：定义一个长度为 21 的字符数组，用于存放用户输入的文本；
要求 B：如果用户输入的文本长度超过 20 个字符，且文本中存在空格，则截取至最接近末尾（第 20 个字符串）的空格；
要求 C：如果用户输入的文本长度超过 20 个字符，且文本中不存在空格，则打印前 20 个字符。
*/

#include<stdio.h>
#include<string.h>
#define MAX 21 // 包含结束符就是21个字符


int main()
{
	char str[MAX];
	int i = 0, ch, space;

	space = MAX - 1;
	
	printf("Please the first row of words:");
	while((ch = getchar()) != '\n')
	{
                str[i++] = ch;
                if (i == MAX - 1)
                {
                        break; // 到了字符数组最后一个位置
                }
                if (ch == ' ')
                {
                        space = i; // 记录最后一个空格的位置
                }
        }

        if (i >= MAX - 1)
        {
                str[space] = '\0';
        }
        else
        {
                str[i] = '\0';
        }
	printf("你输入的文本是：%s\n", str);

	return 0;
}
