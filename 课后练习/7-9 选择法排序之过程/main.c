#define _CRT_SECURE_NO_WARNINGS

/*
本题要求使用选择法排序，将给定的n个整数从小到大排序后输出，并输出排序过程中每一步的中间结果。

选择排序的算法步骤如下：
第0步：在未排序的n个数（a[0]〜 a[n−1]）中找到最小数，将它与 a[0]交换；
第1步：在剩下未排序的n−1个数（a[1] 〜 a[n−1]）中找到最小数，将它与 a[1] 交换；
……
第k步：在剩下未排序的n−k个数（）中找到最小数，将它与 a[k] 交换；
……
第n−2步：在剩下未排序的2个数（a[n−2] 〜a[n−1]）中找到最小数，将它与 a[n−2]交换。

输入格式：
输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

输出格式：
在每一行中输出排序过程中对应步骤的中间结果，即每一步后a[0]〜 a[n−1]的值，相邻数字间有一个空格，行末不得有多余空格。

输入样例：
4
5 1 7 6

输出样例：
1 5 7 6
1 5 7 6
1 5 6 7
*/

#include <stdio.h>

int main(void)
{
	int n, start_sub/*无序数列开始的标签*/, min_sub/*无序数列中最小值的标签，默认为start_sub*/, temp;
	int num[10];

	scanf("%d", &n);

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

			printf("%d", num[0]); //输出n个数
			for (int i = 1; i < n; i++)
				printf(" %d", num[i]);
			putchar('\n');
		}
	}
	return 0;
}