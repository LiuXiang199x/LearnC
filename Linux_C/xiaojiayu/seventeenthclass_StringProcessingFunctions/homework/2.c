/*
2. 根据要求再写一个字符统计程序，不过这个要更复杂一些。
要求 A：统计用户输入的所有字符个数;
要求 B：统计不同的字符个数，并打印出来;
要求 C：找出出现次数最多的字符。
*/


#include <stdio.h>
#include <string.h>

#define NUM 128

int main()
{
        int ch, i, j = 0, max = 0;
        int input_num = 0;
        int ascii[NUM] = {0};
        char count[NUM] = "";

        printf("请输入英文文本：");

        while ((ch = getchar()) != '\n')
        {
                ascii[ch]++; // 字符对应的ASCII码加1
                input_num++;
        }

        for (i = 0; i < NUM; i++)
        {
                if (ascii[i])
                {
                        count[j++] = i;
                        if (ascii[i] > ascii[max])
                        {
                                max = i;
                        }
                }
        }

        printf("你总共输入了%d个字符，其中不同的字符个数有%d个。\n", input_num, strlen(count));
        printf("它们是：%s\n", count);
        printf("出现次数最多的字符是\'%c\'，它总共出现了%d次。\n", max, ascii[max]);

        return 0;
}



