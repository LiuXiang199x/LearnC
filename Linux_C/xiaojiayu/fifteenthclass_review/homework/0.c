/*
假设小甲鱼和黑夜手上均有 10000 元，小甲鱼以 10% 的单利息投资，黑夜则以每年 5% 的复合利息投资。请编写一个程序，计算需要多少年黑夜手头的 Money 才会超过小甲鱼
提示：单利息即每年的利息均为投资额 * 利率；复合利息则是每年的本息所得作为第二年的投资额。
程序实现如下：
27年后，B的投资额超过A！
A的投资额:37000.00
B的投资额:37334.56
*/

//----------------------------------------------------------------------------
/*我自己写的
#include<stdio.h>

int main()
{
	int a=10000,b=10000;
	int cout=1;
	float A,B;
	
	for (A=B=0;B<=A;A=A+a*0.1,B=(B+b)*0.05)	
	{
		cout++;
	}

	printf("%d年后，B的投资额超过A！\nA的投资额是：%2f\nB的投资额是：%2f\n",cout,A+a,B+b);
	
	return 0;
}
*/

#include <stdio.h>

#define MONEY   10000

int main()
{
        double a_total = MONEY, b_total = MONEY;
        int count = 0;

        do
        {
                a_total += MONEY * 0.1;
                b_total += b_total * 0.05;
                count++;
        } while(a_total >= b_total);

        printf("%d年后，黑夜的投资额超过小甲鱼！\n", count);
        printf("小甲鱼的投资额是：%.2f\n", a_total);
        printf("黑夜的投资额是：%.2f\n", b_total);

        return 0;
}
