#define _CRT_SECURE_NO_WARNINGS

/*
本题要求使用二分查找法，在给定的n个升序排列的整数中查找x，并输出查找过程中每一步的中间结果。如果数组a中的元素与x的值相同，输出相应的下标（下标从0开始）；如果没有找到，输出“Not Found”。如果输入的n个整数没有按照从小到大的顺序排列，或者出现了相同的数，则输出“Invalid Value”。

二分查找法的算法步骤描述如下：
设n个元素的数组a已升序排列，用left和right两个变量来表示查找的区间，即在a[left] 〜 a[right]区间去查找x。初始状态为left = 0，right = n-1。首先用要查找的x与查找区间的中间位置元素a[mid]（mid = (left + right) / 2）比较，如果相等则找到；如果x < a[mid]，由于数组是升序排列的，则只要在a[left] 〜 a[mid-1]区间继续查找；如果x > a[mid]，则只要在a[mid+1] 〜 a[right]区间继续查找。也就是根据与中间元素比较的情况产生了新的区间值left、right值，当出现left > right时，说明不存在值为x的元素。

输入格式：
输入在第1行中给出一个正整数n（1≤n≤10）和一个整数x，第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式：
在每一行中输出查找过程中对应步骤的中间结果，按照“[left,right][mid]”的格式输出。提示：相邻数字、符号之间没有空格。
如果找到，输出相应的下标（下标从0开始）；如果没有找到，在一行中输出“Not Found”。
如果输入的n个整数没有按照从小到大的顺序排列，或者出现了相同的数，则输出“Invalid Value”。

输入样例1：
10 2
1 2 3 4 5 6 7 8 9 10

输出样例1：
[0,9][4]
[0,3][1]
1

输入样例2：
4 5
71 74 78 100

输出样例2：
[0,3][1]
[0,0][0]
Not Found

输入样例3：
5 5
39 60 80 80 100

输出样例3：
Invalid Value
*/

#include <stdio.h>
#include <stdbool.h>

bool regular(long int num[], int n); //检测是否按照从小到大的顺序排列

int main(void)
{
	int n;
	long int x;
	long int num[10];

	scanf("%d %ld", &n, &x);
	
	for (int i = 0; i < n; i++) //输入n个数
		scanf("%d", &num[i]);

	if (regular(num, n) == false) //如果未按照从小到大的顺序排列
		printf("Invalid Value");
	else
	{
		int left = 0, right = n - 1, mid;

		while (1)
		{
			if (left > right)
			{
				printf("Not Found");
				break; //未找到时跳出
			}

			mid = (left + right) / 2;
			printf("[%d,%d][%d]\n", left, right, mid);

			if (x == num[mid])
			{
				printf("%d", mid);
				break; //相等后跳出
			}
			else if (x < num[mid])
				right = mid - 1;
			else if (x > num[mid])
				left = mid + 1;
		}
	}

	return 0;
}

bool regular(long int num[], int n) //检测是否按照从小到大的顺序排列
{
	bool regular = true;

	for (int i = 1; i < n; i++) //依次确认有无异常
	{
		if (num[i] <= num[i - 1])
		{
			regular = false;
			break;
		}
	}

	return regular;
}