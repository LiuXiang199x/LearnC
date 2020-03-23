#include<stdio.h>

void f();
void i();
void s();

void f()
{
	printf("########\n##\n##\n#####\n##\n##\n##\n\n");
}

void i()
{
	printf("####\n ## \n ## \n ## \n ## \n####\n\n");
}

void s()
{
	printf(" ######\n ##    ##\n ##    ## \n ######\n      ##\n##     ##\n #####\n\n");
}

int main()
{
	f();
	i();
	s();

	return 0;
}
