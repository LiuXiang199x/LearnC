/*
#include<stdio.h>
#include<Servo.h>

#define LEFT_MOTO_GO 8
#define LEFT_MOTO_BACK 9
#define	RIGHT_MOTO_GO	10
#define	RIGHT_MOTO_BACK	11

void loop()
{
	char ch;
	printf("Please enter your command\n('g'-go)\n('b'-back)\n('r'-TurnRight)\n('l'-TurnLeft)\n::");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case g:
			digitalWrite(8,HIGN);
			digitalWrite(9,LOW);
			digitalWrite(10,HIGH);
			digitalWrite(11,LOW);
			break;
		case b:
                        digitalWrite(9,HIGN);
                        digitalWrite(8,LOW);
                        digitalWrite(11,HIGH);
                        digitalWrite(10,LOW);
                        break;
                case r:
                        digitalWrite(8,HIGN);
                        digitalWrite(9,LOW);
                        digitalWrite(10,LOW);
                        digitalWrite(11,LOW);
                        break;
		case l:
                        digitalWrite(8,LOW);
                        digitalWrite(9,LOW);
                        digitalWrite(10,HIGH);
                        digitalWrite(11,LOW);
                        break;
               
	}

}
*/


#include<Servo.h>

// 为了方便调用，我们为控制左右电机
// 前进后退的数字引脚进行了宏定义

#define LEFT_MOTO_GO    8
#define LEFT_MOTO_BACK    9
#define RIGHT_MOTO_GO    10
#define RIGHT_MOTO_BACK    11

// ...省略部分代码...

void loop()
{
    	char ch; // 用于接受命令
	printf("Please enter your command\n('g'-go)\n('b'-back)\n('r'-TurnRight)\n('l'-TurnLeft)\n::");
        scanf("%c", &ch);
 
  
    	switch(ch)
    	{
        	case 'g':
            		digitalWrite(LEFT_MOTO_GO, HIGH);
            		digitalWrite(LEFT_MOTO_BACK, LOW);
            		digitalWrite(RIGHT_MOTO_GO, HIGH);
            		digitalWrite(RIGHT_MOTO_BACK, LOW);
            		break;
        	case 'b':
            		digitalWrite(LEFT_MOTO_GO, LOW);
           		digitalWrite(LEFT_MOTO_BACK, HIGH);
            		digitalWrite(RIGHT_MOTO_GO, LOW);
            		digitalWrite(RIGHT_MOTO_BACK, HIGH);
            		break;
        	case 'l':
            		digitalWrite(LEFT_MOTO_GO, LOW);
            		digitalWrite(LEFT_MOTO_BACK, LOW);
            		digitalWrite(RIGHT_MOTO_GO, HIGH);
            		digitalWrite(RIGHT_MOTO_BACK, LOW);
            	break;
        	case 'r':   
            		digitalWrite(LEFT_MOTO_GO, HIGH);
            		digitalWrite(LEFT_MOTO_BACK, LOW);
            		digitalWrite(RIGHT_MOTO_GO, LOW);
            		digitalWrite(RIGHT_MOTO_BACK, LOW);
            	break;
        	default:
            		digitalWrite(LEFT_MOTO_GO, LOW);
            		digitalWrite(LEFT_MOTO_BACK, LOW);
            		digitalWrite(RIGHT_MOTO_GO, LOW);
            		digitalWrite(RIGHT_MOTO_BACK, LOW);
            	break;   
    	}

    // ...省略部分代码...
}

