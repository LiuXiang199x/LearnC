#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 800;
	int * const p = &num; // const 修饰的是p这个变量，所以p这个指针是不可被改变的
	// 这里第一个const是修饰int，刚刚没有const的时候，int是可以被修改的，现在有了const后就是const int，说明他就不可以被修改；	

	*p = 1024;
	printf("*p = %d\n", *p);
	
	p = &cnum;
	printf("*p = %d\n", *p);
	
	return 0;
}
