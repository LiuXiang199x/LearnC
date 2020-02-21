#include<stdio.h>
#define MAX 1024

int main()
{
	char str1[MAX];
	char str2[MAX];

	char *target1 = str1;
	char *target2 = str2;

	printf("please enter a string to str1: ");
	fgets(str1,MAX,stdin);
	
	printf("Begin to copy content of str1 to str2....\n");
	while((*target2++ = *target1++)!='\0')
	{
		;
	}
	
	printf("Finished!");
	printf("Now content of str2 is: %s\n",str2);

	return 0;
}
