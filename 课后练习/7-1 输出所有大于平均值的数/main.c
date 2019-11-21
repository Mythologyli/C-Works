#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，将输入的n个整数存入数组a中，然后计算这些数的平均值，再输出所有大于平均值的数。

输入格式:
输入在第1行中给出一个正整数n（1≤n≤10），第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式:
输出在第1行给出平均值，保留2位小数。在第2行输出所有大于平均值的数，每个数的后面有一个空格；如果没有满足条件的数，则输出空行。
如果输入的n不在有效范围内，则在一行中输出"Invalid."。

输入样例1:
10
55 23 8 11 22 89 0 -1 78 186

输出样例1:
47.10
55 89 78 186

输入样例2:
0

输出样例2:
Invalid.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n >= 1 && n <= 10) //n在范围内
	{
		long int num[10];
		long int sum = 0;
		double average;
		bool bigger_num = false; //检测是否存在大于average的数

		for (int i = 0; i < n; i++)
		{
			scanf("%ld", &num[i]); //将n个数录入数组num
			sum += num[i]; //叠加求和
		}

		average = (double)sum / n; //计算平均值
		printf("%.2f\n", average);

		for (int i = 0; i < n; i++)
		{
			if (num[i] > average)
			{
				bigger_num = true; //检测到有大于average的数
				printf("%ld ", num[i]); //输出大于平均值的数
			}
		}

		if (bigger_num == false) //如果没有大于average的数，则再产生一个空行
			putchar('\n');
	}
	else printf("Invalid."); //n不在有效范围内

	return 0;
}