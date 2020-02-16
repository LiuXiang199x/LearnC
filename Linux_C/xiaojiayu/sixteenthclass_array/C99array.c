// C99新标准里面支持动态数组的定义！！！！
#include<stdio.h>

int main()
{
	int n, i;
	
	printf("please enter the number of characters:");
	scanf("%d",&n);
	
	char a[n+1];
	//getchar();
	printf("please enter your characters:");
	for (i = 0; i < n; i++)
	{
		scanf("%c", &a[i]);
	}

	a[n] = '\0';
	printf("the characters you have entered is:%s",a);
	
	return 0;
}
