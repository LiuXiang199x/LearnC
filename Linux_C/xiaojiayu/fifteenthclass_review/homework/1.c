/*
都说天降横财不是什么好事儿，这不，小甲鱼中了双色球一等奖，扣除税收后还剩下 400 万人民币。假设小甲鱼把这些钱做固定投资，每年可以获得 8% 的红利，但在每年的第一天，小甲鱼都会取出 50 万作为本年度的开销……
请编写一个程序，计算需要多久小甲鱼才会败光所有家产，再次回到一贫如洗？
*/

#include<stdio.h>

int main()
{
	double a =4000000;
	int count=0;
	
	while(a>=0)
	{
		a-=500000;
		a+=a*0.08;
		count++;
	
	}
	printf("%d years later you will spend out your money\n",count);

	return 0;
}
