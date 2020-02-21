#include<stdio.h>
#include<unistd.h>

int main()
{
	char *p = "nihao";
	printf("%s\n",p);
	puts(p);
	printf("%c\n",*p);

	printf("%d\n",p);
	printf("%x\n",p);
	printf("%p\n",p);
	printf("%d\n",&(*p));
	printf("%d\n",&(*p));

	printf("%x\n", &p);

	p+=2;
	printf("%s\n",p);
	printf("%x\n",&p);

	return 0;
}

