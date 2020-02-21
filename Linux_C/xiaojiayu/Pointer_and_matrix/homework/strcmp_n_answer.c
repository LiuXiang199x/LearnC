#include <stdio.h>

#define MAX 1024

int main()
{
        char str1[MAX];
        char str2[MAX];

        char *target1 = str1;
        char *target2 = str2;

        char ch;
        int index = 1, n;

        printf("请输入第一个字符串：");
        fgets(str1, MAX, stdin);

        printf("请输入第二个字符串：");
        fgets(str2, MAX, stdin);

        printf("请输入需要对比的字符个数：");
        scanf("%d", &n);

        while (n && *target1 != '\0' && *target2 != '\0')
        {
                ch = *target1;
                if (ch < 0)
                {
                        if (*target1++ != *target2++ || *target1++ != *target2++)
                        {
                                break;
                        }
                }
                if (*target1++ != *target2++)
                {
                       break;
                }
                index++;
                n--;
        }

        if ((n == 0) || (*target1 == '\0' && *target2 == '\0'))
        {
                printf("两个字符串的前 %d 个字符完全相同！\n", index);
        }
        else
        {
                printf("两个字符串不完全相同，第 %d 个字符出现不同！\n", index);
        }

        return 0;
}
