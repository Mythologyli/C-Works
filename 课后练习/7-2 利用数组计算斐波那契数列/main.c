#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，利用数组计算菲波那契（Fibonacci）数列的前N项，每行输出5个，题目保证计算结果在长整型范围内。Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列，例如：：1，1，2，3，5，8，13，...。

输入格式:
输入在一行中给出一个整数N（1≤N≤46）。

输出格式:
输出前N个Fibonacci数，每个数占11位，每行输出5个。如果最后一行输出的个数不到5个，也需要换行。
如果输入的N不在有效范围内，则输出"Invalid."。

输入样例1:
7

输出样例1:
		  1          1          2          3          5
		  8         13

输入样例2:
0

输出样例2:
Invalid.
*/

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n >= 1 && n <= 46)
	{
		long int fib[46] = { 1,1 };

		for (int i = 2; i < n; i++) //计算前n个fib数
			fib[i] = fib[i - 1] + fib[i - 2];

		for (int i = 1; i <= n; i++)
		{
			if (i % 5 == 0) //逢5换行
				printf("%11ld\n", fib[i - 1]); //输出第i个数
			else printf("%11ld", fib[i - 1]); //输出第i个数
		}
	}
	else printf("Invalid.");

	return 0;
}