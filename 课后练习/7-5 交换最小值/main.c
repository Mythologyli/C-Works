#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，找出给定的N个数中的最小值，并将其与第一个数交换，最后输出交换后的序列。题目保证最小值是唯一的。

输入格式:
输入在第一行中给出一个正整数N（1≤n≤10），第二行给出N个整数，数字间以空格分隔。

输出格式:
在一行中顺序输出交换后的序列，每个整数后跟一个空格。

输入样例:
5
8 2 5 1 4

输出样例:
1 2 5 8 4
*/

#include <stdio.h>

int main(void)
{
	int n, min_sub = 0/*最小值的下标，默认0*/, temp;
	int num[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //找出最小下标
	{
		if (num[min_sub] > num[i])
			min_sub = i;
	}

	temp = num[0];
	num[0] = num[min_sub];
	num[min_sub] = temp; //完成交换

	for (int i = 0; i < n; i++) //输出n个数
		printf("%d ", num[i]);

	return 0;
}