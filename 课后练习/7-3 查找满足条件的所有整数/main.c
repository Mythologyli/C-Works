#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，将输入的n个整数存入数组a中，然后在数组a中查找给定的x。如果数组a中的元素与x的值相同，输出所有满足条件的元素的下标（下标从0开始）；如果没有找到，输出“Not Found”。

输入格式 :
第1行输入一个正整数n（0 < n≤10）和一个整数x，第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式 :
如果找到，输出所有与x的值相同的元素的下标，每行输出一个下标；如果没有找到，在一行中输出“Not Found”。

输入样例1 :
5 9
2 9 8 1 9

输出样例1 :
1
4

输入样例2 :
10 101
2 8 10 1 9 8 - 101  0  98762  1

输出样例2 :
Not Found
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	long int x;
	long int num[10];
	bool same = false; //是否存在相同下标

	scanf("%d %ld", &n, &x);

	for (int i = 0; i < n; i++) //读入n个数
		scanf("%ld", &num[i]);

	for (int i = 0; i < n; i++)
	{
		if (x == num[i])
		{
			same = true; //存在相同下标
			printf("%d\n", i); //输出该下标
		}
	}

	if (same == false)
		printf("Not Found");

	return 0;
}