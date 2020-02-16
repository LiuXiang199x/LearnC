#include "stdio.h"
int main(void)
{
    char c,d,e,f;
    printf("please input two characters:\n");
    c=getchar();
    putchar(c);
    putchar('\n');
    d=getchar();
    putchar(d);
    putchar('\n');
    e=getchar();
    putchar(e);
    putchar('\n');
    f=getchar();
    putchar(f);
    putchar('\n');
    printf("c= %c\n",c);
    printf("d= %c\n",d);
    printf("e= %c\n",e);
    printf("f= %c\n",f);
    return 0;
}
