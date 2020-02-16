#include<stdio.h>

int main()
{
	char ch;

	printf("Please input your notes: ");
	scanf("%c", &ch);

	switch (ch)
	{
		case 'A': printf("Your notes up to 90!\n"); break;
		case 'B': printf("Your notes between 80-90\n"); break;
		case 'C': printf("Your notes between 70-80\n"); break;
		case 'D': printf("Your notes between 60-70\n"); break;
		case 'E': printf("Your notes menor 60\n"); break;
		default: printf("Please enter a valid note\n"); break;
	}
		return 0;

}
