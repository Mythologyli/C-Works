#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
	int i, m, n;

	scanf("%d %d", &m, &n);
	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
	PrintPN(m, n);

	return 0;
}

int factorsum(int number)
{
	int sum = 0;
	
	if (number == 1) //1非常特殊，单独讨论
		sum = 1;
	else
	{
		for (int i = 1; i <= number / 2; i++)
		{
			if (number / i == (float)number / i) //判断number / i是否为整数
				sum += i;
		}
	}

	return sum;
}

void PrintPN(int m, int n)
{
	int perfect = 0; //默认找不到完数
	
	for (int num = m; num <= n; num++) //对mn间的每个数进行处理
	{
		if (num == factorsum(num)) //当为完数时，进行显示
		{
			perfect = 1; //找到完数
			
			printf("%d = 1", num); //显示通用前部，也排除了特殊的1
			for (int i = 2; i <= num / 2; i++) //若为因子，接续显示
			{
				if (num / i == (float)num / i)
					printf(" + %d", i);
			}
			putchar('\n'); //一行输出完成后换行
		}
	}

	if (perfect == 0) //找不到完数，输出信息
		printf("No perfect number");
}