#include<stdio.h>
#define number 10   // 这里宏定义是常量定义学生数量，以后只需要改宏就行，不需要一个一个去程序里面改数量

int main()
{
	int s[number];
	int i, sum = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("please enter the notes of Num.%d\n", i+1);
		scanf("%d",&s[i]);
		sum +=s[i];
	}

	printf("We have completed recording notes,the media of notes of this examen is %2f\n",(double)sum / number);	

	return 0;
}
