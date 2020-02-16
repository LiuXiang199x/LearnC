/*
 这是一个有趣的古典数学问题：如果说兔子在出生两个月后，就有繁殖能力，在拥有繁殖能力之后，这对兔子每个月能生出一对小兔子来。假设所有兔子都不会死去，能够一直干下去，那么两年之后可以繁殖多少对兔子呢？
*/
// 思路：第一个月1=1对（这个第一个月的一个是爸妈生的，所以现在还不能生，爸妈不算进去），第二个月：1=1对（还是爸妈生的，1月那个不能算进去），三月份：1+1=2（爸妈和第一个月那个生的两对）对，四月份1+1+1=3对，五月份：1+1+1+1+1=5对，六月份：1+1+1+1+1+1+1+1=8；
//所以F（1）=1; F（2）=1；F（3）=2;F（4）=3;F（5）=5;F（6）=8;F（n）=F（n-1）+F（n-2）
#include<stdio.h>

int main()
{
	long a =1, b=1,c,i;
	
	for(i =3;i<=24;i++)
	{
		c = a+b;
		a = b;    // 换位置！！！
		b = c;	
		
	}
	printf("24月之后会繁殖%ld对兔子\n",c);

	return 0;
}
