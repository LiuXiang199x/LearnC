#include<stdio.h>
#include<math.h>

int main()
{

	int i;
	unsigned long long weight;
	unsigned long long temp;
	unsigned long long sum = 0;
	
	for (i=0; i < 64; i++)
	{
		temp = pow(2, i);
		sum = sum + temp;
	}

	weight = sum / 25000;
	
	printf ("The emperor has to give %llu wheat in total.\n", sum);
	printf ("The weight total of wheat is %llu kg.\n", weight);

	return 0;

}

/*
#include <stdio.h>
#include <math.h>

int main()
{
        unsigned long long sum = 0;
        unsigned long long temp;
        unsigned long long weight;
        int i;

        for (i=0; i < 64; i++)
        {
                temp = pow(2, i);
                sum = sum + temp;
        }

        weight = sum / 25000;

        printf("舍罕王应该给予达依尔%llu粒麦子！\n", sum);
        printf("如果每25000粒麦子为1kg，那么应该给%llu公斤麦子！\n", weight);

        return 0;
}
*/
