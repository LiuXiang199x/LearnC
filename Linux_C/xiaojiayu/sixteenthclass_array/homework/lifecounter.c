//写一个生命计算器，要求用户输入生日，显示他在这个世界上活了多少天？

#include <stdio.h>

int main()
{
        long count = 0; // count用于存放一共活了多少天
        int year1, year2; // year1是你的生日年份，year2是今天的年份
        int month1, month2;
        int day1, day2;
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        printf("请输入你的生日（如1988-05-20）：");
        scanf("%d-%d-%d", &year1, &month1, &day1);

        printf("请输入今年日期（如2016-03-28）：");
        scanf("%d-%d-%d", &year2, &month2, &day2);

        while (year1 <= year2)
        {
                days[1] = (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) ? 29 : 28;
                while (month1 <= 12)
                {
                        while (day1 <= days[month1 - 1])
                        {
                                if (year1 == year2 && month1 == month2 && day1 == day2)
                                {
                                        goto FINISH; // 跳出多层循环才被迫用goto语句
                                }
                                day1++;
                                count++;
                        }
                        day1 = 1;
                        month1++;
                }
                month1 = 1;
                year1++;
        }

FINISH: printf("你在这个世界上总共生存了%d天\n", count);

        return 0;
}
