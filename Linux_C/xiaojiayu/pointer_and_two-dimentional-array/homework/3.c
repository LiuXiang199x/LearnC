#include<stdio.h>

int main()
{
	float pm[3][12] = {
                {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5},
                {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
                {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0}
	};

	int year, month;
	float min, max;
	min = max = pm[1][0];
	
	for (year = 0; year <= 2; year++)
	{
		for (month = 0; month <= 11; month++)
		{
			if (pm[year][month])
			{
				min = min > pm[year][month] ? pm[year][month] : min;
                                max = max < pm[year][month] ? pm[year][month] : max;
			}
		}
	}	
	printf("最大值为：%.2f;     最小值为：%.2f\n",max,min);
	
	int value, step;
	for (year = 0; year <= 2; year++)
        {
                for (month = 0; month <= 11; month++)
                {
			value = pm[year][month];
                        if (value)
                        {
				printf("%d年%.2d月：",year+2014,month+1);
				while(value>=min)
				{
					printf("*");
					value--;
				}
				printf("\n");
                        }
                }
        }



	return 0;
}
