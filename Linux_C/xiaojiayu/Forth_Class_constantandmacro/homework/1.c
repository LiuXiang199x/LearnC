/*
#include<stdio.h>

int main()
{

	printf("Line1\n");
	printf("Line2\n");

	return 0;

}
*/

//Modify the previous codes, using the symbolic constant NL instead of the escape character '\n'

#include<stdio.h>

#define NL '\n'   //!!!!here can't write as ""!!!

int main()
{

	printf("Line1%c",NL);   
//here you can't printf("LineNL"),because the computer will recognize NL as a string.
	printf("Line2%c",NL);

	return 0;

}

