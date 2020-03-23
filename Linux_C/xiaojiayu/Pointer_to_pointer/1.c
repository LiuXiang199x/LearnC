#include<stdio.h>

int main()
{
	char *cBooks[] = {
		"《C语言程序涉及》",
		"《C专家编程》",
		"《C和指针》",
		"《C Primer Plus》",
		"《带你学C带你飞》"};
///	我现在想把这些书分为两类，一类喜欢的一类不喜欢的。如果我们重新建立两个数组来分类就很麻烦
	// 这里数组中存放的都是字符串，string，字符串其实就是指针，指向字符的指针，数组中每个元素其实都是指针，数组可以用指针的形式访问，所以我们可以指向指针的指针来指向指针数组。
	
	char **byFishC;   // byfishc定义为一个指向字符指针的指针变量
	char **Myloves[4];   // 这里是一个数组，数组里面存放的元素是指向指针的指针。
	
	byFishC = &cBooks[5];   // cbooks[5]得到的是一个字符串，对它进行取址。
	Myloves[0] = &cBooks[0];
	Myloves[1] = &cBooks[1];
	Myloves[2] = &cBooks[2];
	Myloves[3] = &cBooks[3];
	
	printf("FishC出版的图书有：%s\n",*byFishC);
	printf("我喜欢的书有：\n");
	int i;

	for (i=0;i<4;i++)
	{
		printf("%s\n",*Myloves[i]);

	}

	return 0;
}
