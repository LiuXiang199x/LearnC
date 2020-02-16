#include<stdio.h>

#define URL "WWW.4399.COM"
#define Name "game"
#define Year "2019"    //if use "2019" is string,so you need use %s in printf
//if define year 2019, in printf you need use %d
#define Month "November"
#define Day 8

int main()
{

	printf("%s is built in %d of %s,it is a %s\n",URL, Day, Month, Name);
	

	return 0;
}
