#include<stdio.h>
#define MAX 1024

int main()
{

	char str[MAX];
	char *target = str;
	char ch;
	int length =0;
	
	printf("please enter a sting:");
	fgets(str,MAX,stdin);
	
	while(1)
	{
		ch = *target++;
		if (ch == '\0')
		{
			break;
		}
	
		if ((int)ch < 0)
		{
			target += 2;
		}
		length++;
	}

	printf("You have entered %d characters totally.\n", length-1);
	return 0;
}
