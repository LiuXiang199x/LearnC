#include<stdio.h>
#include<math.h>
/*
这里还可以使用宏定义
#define first_kg 23
#define next_kg 14
*/

/*这里一直是一个死循环，不知道为什么。。。。
int main()
{
	float weight;
	int b;
	int price;
	b = 1, price = 0;
	printf("Please enter the weight of your package:\n");
	scanf("%f",&weight);
	weight = ceil(weight);

	
	for(weight<=20; b++;weight++)
	{
		price=23+(weight-b)*14;
		printf("%f------%d\n",weight,price);
	}
	
	
	return 0;
}
*/
#include <stdio.h>

#define FIRST_KG 23
#define NEXT_KG 14

int main()
{
        int weight, cost;

        printf("公斤 —— 花费(元)：\n");
        for (weight = 1, cost = FIRST_KG; weight <= 20; weight++, cost += NEXT_KG)
        {
                printf("%3d  ——  %3d\n", weight, cost);
        }

        return 0;
}


