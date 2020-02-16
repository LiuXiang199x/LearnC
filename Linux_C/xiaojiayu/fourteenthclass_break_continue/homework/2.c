#include <stdio.h>
#include <math.h>

int main()
{
        int count = 4; // 已知2,3,5,7是素数
        int i, j, k;
        _Bool flag = 1;

        for (i = 9; i < 10000; i++)
        {
                k = (int)sqrt((double)i);

                for (j = 2; j <= k; j++)
                {
                        if (i % j == 0)
                        {
                                flag = 0;
                                break;
                        }
                }

                if (flag)
                {
                        count++;
                }
                else
                {
                        flag = 1;
                }
        }

        printf("10000以内共有%d个素数！\n", count);

        return 0;
}
