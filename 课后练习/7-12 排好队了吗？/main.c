#define _CRT_SECURE_NO_WARNINGS

/*
本题要求编写程序，将输入的n个整数存入数组a中，判断它们是否按从大到小的次序排列好了?

输入格式:
输入在第1行中给出一个正整数n（1≤n≤100），第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式:
如果这n个整数是按照从大到小的次序排列的，则在一行中输出“Yes”，否则，在一行中输出“No”。

输入样例1:
6
1 3 6 40 12 50

输出样例1:
No

输入样例2:
5
10 8 8 3 1

输出样例2:
Yes
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;
	int num[100];
	bool regular = true;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //依次确认有无异常
	{
		if (num[i] > num[i - 1])
		{
			regular = false;
			break;
		}
	}

	if (regular == true)
		printf("Yes");
	else printf("No");


	return 0;
}