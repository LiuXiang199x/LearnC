#include<stdio.h>

#define MAX 1024

int main()
{
	float PM[3][12] ={0.0,0.0,0.0,0.0,0.0,0.0,0.0,31.3,35.5,58.7,49.6,55.5,59.8,54.9,33.1,38.2,26.6,20.5,27.8,38.5,41.5,44.7,38.1,41.5,34.9,36.4,47.5,37.9,30.6,23.4,26.6,34.3,0.0,0.0,0.0,0.0}; 
	
	int year, month;
	
	printf("请输入待查询年月分（年-月）：");
	scanf("%d-%d",&year,&month);

	if (year < 2014 || year > 2016 || month < 1 || month >12)
	{
		printf("输入数据错误！\n");
	}

	else
	{
		year -= 2014;          //// 这里要减去2014是因为为了和行数匹配！
		month -= 1;	/// 同理为了和列数匹配
		if (PM[year][month])   //////	 非常巧妙！！！ 不想要的就将它变成0！因为if（false）就不会运行了
		{
			printf("%d年%d月广州的PM2.5值是：%.2f\n",year + 2014,month + 1,PM[year][month]);
		}
		else
		{
			printf("抱歉，该月份未收录数据！\n");
		}		

	}


	return 0;
}
