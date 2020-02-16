#include <stdio.h>
#include <math.h>

int main()
{
        float p0 = 10000, p1, p2, p3;
        float r1 = 0.0175, r2 = 0.0225, r3 = 0.0275, r5 = 0.0275;

        p1 = p0 * (1 + r5 * 5);
        p2 = p0 * (1 + r3 * 3) * (1 + r2 * 2);
        p3 = p0 * pow((1 + r1), 5);

        printf("第一种方案的本息和是：%.2f\n", p1);
        printf("第二种方案的本息和是：%.2f\n", p2);
        printf("第三种方案的本息和是：%.2f\n", p3);

        return 0;
}
