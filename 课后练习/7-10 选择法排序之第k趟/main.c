#define _CRT_SECURE_NO_WARNINGS

/*
本题要求使用选择法排序，将给定的n个整数从小到大进行排序，输出第k趟（k从0开始）排序后的结果。

选择排序的算法步骤如下：
第0步：在未排序的n个数（a[0]〜 a[n−1]）中找到最小数，将它与 a[0]交换；
第1步：在剩下未排序的n−1个数（a[1] 〜 a[n−1]）中找到最小数，将它与 a[1] 交换；
……
第k步：在剩下未排序的n−k个数（）中找到最小数，将它与 a[k] 交换；
……
第n−2步：在剩下未排序的2个数（a[n−2] 〜a[n−1]）中找到最小数，将它与 a[n−2]交换。

输入格式：
输入第一行给出一个不超过10的正整数n和一个不超过n-1的正整数k。第二行给出n个整数，其间以空格分隔。

输出格式：
在一行中输出排序过程中第k步（k从0开始）的中间结果，即第k步后a[0]〜 a[n−1]的值，相邻数字间有一个空格，行末不得有多余空格。

输入样例：
4 1
5 1 7 2

输出样例：
1 2 7 5
*/

#include <stdio.h>

int main(void)
{
	int n, k, start_sub/*无序数列开始的标签*/, min_sub/*无序数列中最小值的标签，默认为start_sub*/, temp;
	int num[10];

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	if (n == 1) //只有一个数为特殊情况，原样输出即可
		printf("%d", num[0]);
	else
	{

		for (start_sub = 0; start_sub < n - 1; start_sub++)
		{
			min_sub = start_sub;
			for (int i = start_sub; i < n; i++) //找出无序数列中最小值的标签
				if (num[i] < num[min_sub])
					min_sub = i;

			temp = num[start_sub];
			num[start_sub] = num[min_sub];
			num[min_sub] = temp; //完成无序数列第一个数域与无序数列中最小值的交换

			if (start_sub == k)
			{
				printf("%d", num[0]); //输出n个数
				for (int i = 1; i < n; i++)
					printf(" %d", num[i]);
			}
		}
	}

	return 0;
}