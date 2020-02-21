#include<stdio.h>

#define MAX 1024

int main()
{
	char str1[MAX*2];  // 确保连接到str1后不会越界
	char str2[MAX];
	
	char *target1 = str1;
	char *target2 = str2;
	
	printf("Please enter the first string:");
	fgets(str1,MAX,stdin);
	printf("Please enter the second string:");
	fgets(str2,MAX,stdin);

	// 将指针指向str1的末尾
	while(*target1++!='\0')
		;  // 现在为止*target1这个指针指向了末尾

	// 要将str2连接到str1最后面的'\0'和'\n'，覆盖掉这两个
	
	target1 -=2;	

	// 连接字符串
	while((*target1++=*target2++)!='\0')
		;

	printf("The new string is: %s",str1);

	return 0;
}
