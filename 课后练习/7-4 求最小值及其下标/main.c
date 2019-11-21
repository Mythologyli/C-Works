#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，找出给定的n个数中的最小值及其对应的最小下标（下标从0开始）。

输入格式:
输入在第一行中给出一个正整数n（1≤n≤10）。第二行输入n个整数，用空格分开。

输出格式:
在一行中输出最小值及最小值的最小下标，中间用一个空格分开。

输入样例:
6
2 9 -1 8 -1 6

输出样例:
-1 2
*/

#include <stdio.h>

int main()
{
	int n, min_sub = 0/*最小值的下标，默认0*/;
	int num[10];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //找出最小下标
	{
		if (num[min_sub] > num[i])
			min_sub = i;
	}

	printf("%d %d", num[min_sub], min_sub);

	return 0;
}