/*
根据以下已知公式求 Pi 的近似值，要求正确计算出小数点后前 7 位（即3.1415926）。
pi/4 = 1-1/3+1/5-1/7+1/9-1/11+......
提示1：分子永远都是1；
提示2：后一项的分母是前一项的分母加2；
提示3：可以通过i = -i实现符号取反的效果；
提示4：要正确计算出小数点后前 7 位数，最后一项的绝对值需要小于 10^(-8) 才行（该项不累加）；
*/

#include <stdio.h>
#include <math.h>

int main()
{
        int sign = 1; // 表示符号
        double pi = 0.0, n = 1, term = 1.0; // n表示分母，term表示当前项的值

        while (fabs(term) >= 1e-8) // 1e-8表示10^(-8)
        {
                pi = pi + term;
                n = n + 2;
                sign = -sign;
                term = sign / n;
        }

        pi = pi * 4;
        printf("pi = %10.7f\n", pi);

        return 0;
}
