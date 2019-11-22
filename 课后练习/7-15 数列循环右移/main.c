#define _CRT_SECURE_NO_WARNINGS 

/*
本题要求编写程序，将数组a中的每个元素循环向右移m个位置，即将数组a中元素由a[0]、a[1]、⋯、a[n−1]变换为第a[n−m]、a[n−m+1]、⋯、a[n−1]、a[0]、a[1]、⋯、a[n−m−1]。

输入格式：
输入第1行给出n（1≤n≤100）和m（1≤n≤100），第2行输入n个整数，之间用空格分隔。

输出格式：
在一行中输出循环移位后的数组元素，每个元素后有一个空格。

输入样例：
3 2
1 2 3

输出样例：
2 3 1
*/

#include <stdio.h>

int sub_finder(int i, int n, int m); //寻找以i为下标的元素需要到达的下标

int main(void)
{
	int n, m;
	int num[100], changed_num[100];

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	for (int i = 0; i < n; i++)
		changed_num[sub_finder(i, n, m)] = num[i];

	for (int i = 0; i < n; i++) //输出n个数
		printf("%d ", changed_num[i]);

	
	return 0;
}

int sub_finder(int i, int n, int m) //寻找以i为下标的元素需要交换的下标
{
	int sub;

	sub = i + m < n ? (i + m) : (i + m - n);

	return sub;
}
