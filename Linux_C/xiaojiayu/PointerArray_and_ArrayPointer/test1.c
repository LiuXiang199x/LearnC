#include<stdio.h>

#define MAX 1024

int main()
{
	char str[MAX];
	char *target = str;
	int n = 1;
	
	printf("Please enter your string:");
	fgets(str,MAX,stdin);
	
	while(*target++ != '\0')
	{
		n++;
	}
	printf("The quantity of string that you entered is: %d\n",n);

	return 0;
}
