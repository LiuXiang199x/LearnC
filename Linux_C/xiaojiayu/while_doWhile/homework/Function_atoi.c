/*
基本要求：
A. 将用户输入的字符串中代表数字的字符转换为整型数值
B. 打印转换结果
C. 只打印第一组数字
*/

#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>

int main(){
        int ch;
        int num = 0;
        printf("请输入待转换的字符串：");
        do{
                ch = getchar();
                if (ch >= '0' && ch <= '9'){
                        num = 10 * num + (ch - '0');//这里还没有说道数组，所以输出的都是123（一百二十三）所以需要进位。
                }
                else{
                        if (num){
                                break; // 如果已有数字，则退出循环
                        }
                }

        }
        while (ch != '\n');
        printf("结果是：%d\n", num);
        return 0;
}
