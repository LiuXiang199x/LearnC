#include<stdio.h>

#define MAX 1024

int main()
{
	char str1[MAX];	
	char str2[MAX];	

	char *target1 = str1;
	char *target2 = str2;
	
	int index = 1;
	int n = 1;
	
	printf("Please enter the first string:");
	fgets(str1,MAX,stdin);
	printf("Please enter the second string:");
	fgets(str2,MAX,stdin);
	printf("Please enter the quantity of string that you want to compare:");	
	scanf("%d",&n);	
	while(n--)
	{
		while (*target1 != '\0' && *target2 != '\0')
		{
			if (*target1++ == *target2++)
			{
				break;
			}
			index++;
		}
	
		if (*target1 == '0' && *target2 == '\0')
		{
			printf("these two string are same\n");
		}	
		else
		{
			printf("these two string are different,from %dth word.\n",index);
		}
	}

	return 0;
}
