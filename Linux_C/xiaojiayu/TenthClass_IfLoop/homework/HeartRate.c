#include <stdio.h>
#include "ssebtr1.h"

int main()
{
        int age, max_hr, bpm, hr; // hr即HeartRate，心率的意思

        printf("请输入您的年龄：");
        scanf("%d", &age);

        max_hr = 220 - age;
        bpm = 150;

        playSound(bpm);
        hr = getHeartRate();

        if (hr > max_hr)
        {
                printf("请马上停止跑步，否则会有绳命危险……\n");
        }
        else if (hr > max_hr * 0.85)
        {
                printf("请放慢脚步\n");
                bpm = bpm - 20; // 注意，这里需要先修改bpm的值
                playSound(bpm); // 你不能在这里传入bpm-20 
        }
        else if (hr < max_hr * 0.75)
        {
                printf("Come on，请加快节奏！\n");
                bpm = bpm + 20;
                playSound(bpm);
        }
        else
        {
                playSound(bpm);
        }

        return 0;
}


/*
#include<stdio.h>
#include "ssebtr1.h"

int main()
{
	int age, max_HearRate, HeartRate;
	printf("请输入年龄：");
	scanf("%d", &age);
	max_HeartRate = 220 - age;
	bpm = 150;
	playSound(bpm);
	HeartRate = getHeartRate();


	if(HearRate > max_HeartRate)
	{
		printf("请马上停止跑步，否则会有生命危险\n");
	}
	else
	{
		if(HearRate > 0.85*HearRate)
		{
			print("请放慢脚步\n");
			bpm = bpm - 20;
			playSound(bpm);

		}
		else
		{
			if(HeartRate > 0.75*HeartRate)
			{
				printf("Come on,请加快节奏\n");
				bpm = bpm + 20;
				playSound(bpm);
			}
			else
			{
				palySound(bpm);
			}
		}
		
	}	



	return 0;
}
*/





