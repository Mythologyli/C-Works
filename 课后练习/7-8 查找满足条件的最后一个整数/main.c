#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，将输入的n个整数存入数组a中，然后在数组a中查找给定的x。如果数组a中的元素与x的值相同，输出满足条件的最后一个元素的下标（下标从0开始）；如果没有找到，输出“Not Found”。

输入格式:
输入在第1行中给出一个正整数n（1≤n≤100）和一个整数x，第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式:
如果找到，输出与x的值相同的最后一个元素的下标；如果没有找到，在一行中输出“Not Found”。

输入样例1:
5 9
2 9 8 1 9

输出样例1:
4

输入样例2:
10 101
2 8 10 1 9 8 -101  0  98762  1

输出样例2:
Not Found
*/

#include <stdio.h>

int main(void)
{
	int n, x_sub = -1/*与x值相同元素的下标,-1表示不存在*/;
	long int x;
	long int num[100];

	scanf("%d %ld", &n, &x);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%ld", &num[i]);

	for (int i = 0; i < n; i++) //寻找与x值相同的元素
		if (x == num[i])
			x_sub = i;

	if (x_sub == -1) //与x等值元素不存在
		printf("Not Found");
	else printf("%d", x_sub);

	return 0;
}