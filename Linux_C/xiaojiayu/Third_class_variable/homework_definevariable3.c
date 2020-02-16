#include<stdio.h>
int main()
{

	printf("Print five characters:%c %c %c %c %c %c\n", 'F', '\105', 115, 104, 67);
	printf("Front filled with spaces:%10d\n", 2015);
	printf("Front filled with 0:%010d\n",2015);
	printf("Align right,keep two decimals:%10.2f\n",3.1415926);
	printf("ALign left,keep three decimals:%-10.3f\n", 3.1415926);
	printf("Align right,keep formal exponential:%10e\n", 520000.0);
	printf("Aligh left,keep formal exponential:%-10E\n", 520000.0);

	return 0;


}
