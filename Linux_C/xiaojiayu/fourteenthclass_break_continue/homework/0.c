/*
#include<stdio.h>

int main()
{
	char ch;
	int couta, coute, couti, couto, coutu;
	couta=coute=couti=couto=coutu = 0;
	printf("please enter a frase in english:");

	while((ch = getchar() != '\n'))
	{
		if (ch =='a' || ch == 'A')
		{
			couta++;
		}
		else if( ch == 'e' || ch == 'E')
		{
			coute++;
		}
		else if ( ch == 'i' || ch == 'I')
		{
			couti++;
		}
		else if ( ch == 'o' || ch == 'O' )
		{
			couto++;
		}
		else if	( ch == 'u' || ch == 'U' )
		{
			coutu++;
		}
	}
	printf("The frase you enter has %d vowels.\n",couta+coute+couti+couto+coutu);
	printf("In this frase:a(%d),e(%d),i(%d),o(%d),u(%d)\n",couta,coute,couti,couto,coutu);

	return 0;
}
*/

#include <stdio.h>

int main()
{
        char ch;
        int a, e, i, o, u;

        a = 0;
        e = 0;
        i = 0;
        o = 0;
        u = 0;

        printf("请输入一个英文句子：");

        while ((ch = getchar()) != '\n')
        {
                switch (ch)
                {
                        case 'a':
                        case 'A': a++;
                                  break;
                        case 'e':
                        case 'E': e++;
                                  break;
                        case 'i':
                        case 'I': i++;
                                  break;
                        case 'o':
                        case 'O': o++;
                                  break;
                        case 'u':
                        case 'U': u++;
                                  break;
                }
        }

        printf("您输入的句子中，包含元音字母%d个！\n", a + e + i + o + u);
        printf("其中:a(%d),e(%d),i(%d),o(%d),u(%d)\n", a, e, i, o, u);

        return 0;
}
