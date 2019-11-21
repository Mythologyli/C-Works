#define _CRT_SECURE_NO_WARNINGS

/*
本题要求将给定的n个整数从大到小排序后输出。

输入格式：
输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

输出格式：
在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

输入样例：
4
5 1 7 6

输出样例：
7 6 5 1
*/

#include <stdio.h>

int main(void)
{
	int n, start_sub/*无序数列开始的标签*/, max_sub/*无序数列中最大值的标签，默认为start_sub*/, temp;
	int num[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	for (start_sub = 0; start_sub < n; start_sub++)
	{
		max_sub = start_sub;
		for (int i = start_sub; i < n; i++) //找出无序数列中最大值的标签
			if (num[i] > num[max_sub])
				max_sub = i;
		
		temp = num[start_sub];
		num[start_sub] = num[max_sub];
		num[max_sub] = temp; //完成无序数列第一个数域与无序数列中最大值的交换
	}

	printf("%d", num[0]); //输出n个数
	for (int i = 1; i < n; i++) 
		printf(" %d", num[i]);

	return 0;
}