/*
#include<stdio.h>

int main()
{

	char * name[100];
	float hight, weight, hight1, weight1;

	printf("Please enter your name: ");
	scanf("%s", &name);

	printf("Please enter your hight(cm): ");
	scanf("%f", &hight);

	printf("Please enter your weight(kg): ");
	scanf("%f", &weight);
		
	hight1 = hight/2.54;
	weight1 = weight/2.2;	

	printf("The hight of %s is %.2f (in),the weight is %.2f\n", name, hight1, weight1);

	return 0;
}
*/

#include<stdio.h>

int main()
{

        char *name;
        float hight, weight;

        printf("Please enter your name: ");
        scanf("%s", &name);

        printf("Please enter your hight(cm): ");
        scanf("%f", &hight);

        printf("Please enter your weight(kg): ");
        scanf("%f", &weight);

	printf("===========Please wait============\n");

        hight = hight/2.54;
        weight = weight/2.2;

        printf("The hight of %s is %.2f (in),the weight is %.2f(lb)\n", name, hight, weight);

        return 0;
}

