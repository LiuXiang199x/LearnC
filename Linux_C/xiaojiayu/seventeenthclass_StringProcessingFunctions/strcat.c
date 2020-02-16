#include<stdio.h>
#include<string.h>

int main()
{
        char str1[] = "i love";
	char str2[] = "you";

        strcat(str1, " ");   // 第一次连接一个空格
        strcat(str1, str2);   // 第二次连接str2
        printf("str1: %s\n", str1);

        return 0;
}
