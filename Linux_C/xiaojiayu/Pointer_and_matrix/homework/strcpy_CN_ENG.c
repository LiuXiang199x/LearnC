#include<stdio.h>
#define MAX 1024
	
int main()
{
	char str1[MAX];
	char str2[MAX];
	
	char *target1 = str1;
	char *target2 = str2;
	
	char ch;
	int n;

	printf("please enter a string to str1:");
	fgets(str1,MAX,stdin);
	
	printf("please enter the quantity of string that you want to copy:");
	scanf("%d", &n);
	
	printf("Begin to copy....\n");
	while(n--)
	{	
		ch = *target2++ = *target1++;
		if (ch == '\0')
		{
			break;
		}
	
		if ((int)ch < 0)
		{
			*target2++ = *target1++;
			*target2++ = *target1++;
		}
	}

	*target2 = '\0';

	printf("Finished!\n");
	printf("Now the content of str2 is : %s\n",str2);

	return 0;
}
