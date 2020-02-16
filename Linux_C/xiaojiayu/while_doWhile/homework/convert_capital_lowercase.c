#include <stdio.h>

int main()
{
	int ch;
	printf("please enter a frase:\n");
	
	while((ch = getchar()) != '\n')
	{
		if(ch >='A' && ch <='Z')
		{
			ch = ch + ('a'-'A');
		}
		else if(ch>='a' && ch<='z')
		{
			ch = ch - ('a'-'A');
		}
		putchar(ch);
	}
	putchar('\n');




	return 0;
}
