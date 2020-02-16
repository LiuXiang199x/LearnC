/*
#include <stdio.h>

int main()
{
        int ch;

        printf("请输入明文：");

        while ((ch = getchar()) != '\n')
        {
                if (ch >= 'a' && ch <= 'z')
                {
                        putchar('a' + (ch - 'a' + 3) % 26);  //这里巧妙的解决了上面的问题，26个英文字母。ch-‘a’就是距离a的位置，比如最后三位x（24），y（25），z（26）：（24+3）%26=1——所以x移动三位是a；同理：（25+3）%26=2——y移动三位是b。
                        continue;
                }

                if (ch >= 'A' && ch <= 'Z')
                {
                        putchar('A' + (ch - 'A' + 3) % 26);
                        continue;
                }

                putchar(ch);
        }

        putchar('\n');

        return 0;
}
*/


#include<stdio.h>

int main()
{
	printf("Please enter a frase:");
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		if (ch == 'y')
		{
			ch = 'b';
			putchar(ch);
			continue;
		}
		if (ch == 'z')
		{
			ch == 'c';
			putchar(ch);
			continue;
		}
		
		if ((ch>'a' && ch<'z')||(ch>'A' && ch<'Z'))
		{
			ch +=3;
			putchar(ch);
		}	
	}
	putchar('\n');
	return 0;
}

