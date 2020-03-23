#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 800;
	const int *pc = &num;
	int *pcn = &cnum;	

	printf("num: %d, &num: %p\n",num, &num);
	printf("pc: %d, pc: %p\n",*pc, pc);

	pc = &num;

	num = 1024;
	printf("pc: %d, pc: %p\n",*pc, pc);
	
	printf("pcn: %d, pcn: %p\n",*pcn, pcn);
	*pcn = 888;
	printf("pcn: %d, pcn: %p\n",*pcn, pcn);

	pc = &cnum;
	printf("pc: %d, pc: %p\n",*pc, pc);
	

	return 0;
}
