#include<stdio.h>

int main()
{
	/// ASCII中A-Z是65-90, a-z是97-122.
	char a,c;
	int b;
	printf("please input a character:");
	scanf("%c", &a);
	b = a;
	if(b <= 90)
	{
	}
	else
	{
		c = b-32;
		
		printf("The character converted is %c\n",c);
	}
	return 0;



}
