#include<stdio.h>
#include<string.h>

int main()
{
        char str1[] = "i love you";
        char str2[] = "i love you";

        if (!strcmp(str1,str2))
	{
		printf("the str1 and str2 is same\n");
	}
        else
	{
		printf("they are diferent\n");
	}

        return 0;
}

