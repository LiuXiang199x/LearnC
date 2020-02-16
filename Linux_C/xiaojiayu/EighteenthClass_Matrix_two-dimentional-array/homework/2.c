#include <stdio.h>
#include <string.h>

#define NUM 5

int main()
{
        char slogan[NUM][100];
        int i, j, ch, min, max, temp;

        for (i = 0; i < NUM; i++)
        {
                printf("请输入%d句话：", i+1);
                for (j = 0; (ch = getchar()) != '\n'; j++)
                {
                        slogan[i][j] = ch;
                }
                slogan[i][j] = '\0';
        }

        min = 0;
        max = min;

        printf("你输入了下边%d句话：\n", NUM);

        // 打印每句口号，同时比较长度
        for (i = 0; i < NUM; i++)
        {
                printf("%s\n", slogan[i]);
                temp = strlen(slogan[i]);
                min = temp < strlen(slogan[min]) ? i : min;
                max = temp > strlen(slogan[max]) ? i : max;
        }

        printf("其中最长的是：%s\n", slogan[max]);
        printf("其中最短的是：%s\n", slogan[min]);

        return 0;
}
