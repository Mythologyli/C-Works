#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
	int m, n, t;

	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);

	return 0;
}

int fib(int n) //返回第n项Fibonacci数
{
	int fib[21] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ,377, 610, 987, 1597, 2584, 4181, 6765 ,10946}; //打表万岁
	return fib[n - 1];
}

void PrintFN(int m, int n) //在一行中输出给定范围[m, n]内的所有Fibonacci数
{
	int fibonacci = 0; //默认没有Fibonacci数
	for (int i = 1, space = 0/*表示不加空格*/; fib(i) <= n; i++) //从第一个数开始比较，到超过n时结束
	{
		if (fib(i) < m)
			continue;

		fibonacci = 1; //有Fibonacci数

		if (space == 0)
		{
			printf("%d", fib(i));
			space = 1; //表示以后要加空格
		}
		else printf(" %d", fib(i));
	}
	if (fibonacci == 0) //若没有Fibonacci数，输出信息
		printf("No Fibonacci number");
}