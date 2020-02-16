#include<math.h>
#include <stdio.h>


int main()
{
        int num , num2;
        int cout;
        for(cout = 0 , num = 5; num < 10001 ; num ++) 
	{
		// printf("num=%d",num); 这里为了探知num是以几进来的，以2进来的
                for(num2 = 2; num2 <= num/2; num2++) 
		{
			if(!(num % num2)) // 这里千万不能用cout来判断素数的个数，因为比如5 7 11 你无法循环几次然后只让cout加一次（反正现在我不会），这里用来num % num2 == 0 来判断非素数就很简单冷，只要是非素数肯定就会等于零一次，一为零我们就不要这个，就cout加一然后break出去，1，这里用来num % num2 == 0 就cout加一然后break出去，10000减去cout就是素数个数了。
			{
				cout++;
				break;
			}
               		
		}
	}
        printf("10000以内共有%d个素数\n" ,10000-cout);
}



/*小甲鱼：
#include <stdio.h>

int main()
{
        int count = 2; // 已知2和3是素数
        int i, j;
        _Bool flag = 1;

        for (i = 5; i < 10000; i++)
        {
                for (j = 2; j < i / 2; j++)
                {
                        if (i % j == 0)
                        {
                                flag = 0;
                                break;
                        }
                }

                if (flag)
                {
                        count++;
                }
                else
                {
                        flag = 1;
                }
        }

        printf("10000以内共有%d个素数！\n", count);

        return 0;
}
*/
