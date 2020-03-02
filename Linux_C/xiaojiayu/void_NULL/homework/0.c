#include<stdio.h>

// #define MAX 1024

int main()
{
	int m, n, p, i, j, row, k;
	// char a[MAX][MAX];	
	// char b[MAX][MAX];
	// 定义第一个矩阵
	printf("请输入第一个矩阵的尺寸（m * p）：");
	scanf("%d*%d",&m,&p);
	int matrix_1[m][p];

	// 定义第二个矩阵
	printf("请输入第二个矩阵的尺寸（p * n）：");
	scanf("%d*%d",&p,&n);
	int matrix_2[p][n];


	// 初始化二维数组
	// VAL数组不支持直接初始化操作
	int matrix_out[m][n];

//	printf("请输入第一个矩阵的值:\n");
//	getchar();
	for (i = 0; i < m; i++)
	{
		for(j = 0; j < p; j++)
		{
//			scanf("%c",&matrix_1[i][j]);
			matrix_out[i][j] = 0;
		}
	}
	
	// 用户输入第一个矩阵
        printf("请输入第一个矩阵的值：\n");
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < p; j++)
                {
                        scanf("%d", &matrix_1[i][j]);
                }
        }

	// 用户输入第二个矩阵
	printf("请输入第二个矩阵的值:\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&matrix_2[i][j]);
		}
	}
	
	// 计算乘积并保存
	for(i = 0; i < m; i++)
	{
		for(j = 0; j<n;j++)  // 答案取一个的行一个的列。（会去掉公共数，自己推敲）
		{
			for (k =0; k< p; k++)
			{
	// 精华！！ 因为答案的第i，j个元素等于他们的第i行和第j列相乘，所以两个相乘的元素的行数或者列数一定是一个变量。所以定义一个k，因为外两层循环是针对于“不变的”，再来一层循环k来改变两个乘数。
				matrix_out[i][j] += matrix_1[i][k] * matrix_2[k][j];
			}	
		}
	}

	printf("计算结果如下：\n");
	
	///// 接下来就是打印的困难！
	// row 取行数最大值
	
	        // row 取行数最大值
        row = m > p ? m : p;

        for (i = 0; i < row; i++)
        {
                printf("|  ");
                // 打印 matrix_1
                for (j = 0; j < p; j++)
                {
                        if (i < m)
                        {
                                printf("\b%d ", matrix_1[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // 打印 * 号
                if (i == row / 2)
                {
                        printf(" * ");
                }
                else
                {
                        printf("   ");
                }
                printf("|  ");
                // 打印 matrix_2
                for (j = 0; j < n; j++)
                {
                        if (i < p)
                        {
                                printf("\b%d ", matrix_2[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // 打印 = 号
                if (i == row / 2)
                {
                        printf(" = ");
                }
                else
                {
                        printf("   ");
                }
                // 打印 matrix_out
                printf("|  ");
                for (j = 0; j < n; j++)
                {
                        if (i < m)
                        {
                                printf("\b%d ", matrix_out[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b      ");
                        }
                }
                printf("\n");
        }

        return 0;
}
