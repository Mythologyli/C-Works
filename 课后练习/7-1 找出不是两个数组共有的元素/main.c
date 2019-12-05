#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
给定两个整型数组，本题要求找出不是两者共有的元素。

输入格式:
输入分别在两行中给出两个整型数组，每行先给出正整数N（≤20），随后是N个整数，其间以空格分隔。

输出格式:
在一行中按照数字给出的顺序输出不是两数组共有的元素，数字间以空格分隔，但行末不得有多余的空格。题目保证至少存在一个这样的数字。同一数字不重复输出。

输入样例:
10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1

输出样例:
3 5 -15 6 4 1
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
#include <stdbool.h>

int main(void)
{
	int N_a, N_b/*每个数组中元素的数量*/, i_c = 0/*num_c的下标*/;
	int num_a[20], num_b[20], num_c[20]/*储存不是两数组共有的元素*/;
	bool is_num_c, is_repeat;

	scanf("%d", &N_a);
	for (int i = 0; i < N_a; i++) //将数输入两个数组
		scanf("%d", &num_a[i]);

	scanf("%d", &N_b);
	for (int i = 0; i < N_b; i++)
		scanf("%d", &num_b[i]);

	for (int i_a = 0; i_a < N_a; i_a++)
	{
		is_num_c = true, is_repeat = false;

		for (int i = 0; i < i_a; i++) //检查是否重复
		{
			if (num_a[i] == num_a[i_a])
			{
				is_repeat = true;
				break;
			}
		}

		if (is_repeat == true) //如果重复，跳过，进行下一次循环
			continue;

		for (int i_b = 0; i_b < N_b; i_b++)
		{
			if (num_b[i_b] == num_a[i_a])
			{
				is_num_c = false;
				break;
			}
		}

		if (is_num_c == true)
		{
			num_c[i_c] = num_a[i_a];
			i_c++;
		}
	}

	for (int i_b = 0; i_b < N_b; i_b++)
	{
		is_num_c = true, is_repeat = false;

		for (int i = 0; i < i_b; i++) //检查是否重复
		{
			if (num_b[i] == num_b[i_b])
			{
				is_repeat = true;
				break;
			}
		}

		if (is_repeat == true) //如果重复，跳过，进行下一次循环
			continue;

		for (int i_a = 0; i_a < N_a; i_a++)
		{
			if (num_a[i_a] == num_b[i_b])
			{
				is_num_c = false;
				break;
			}
		}

		if (is_num_c == true)
		{
			num_c[i_c] = num_b[i_b];
			i_c++;
		}
	}

	printf("%d", num_c[0]);
	for (int i = 1; i < i_c; i++)
		printf(" %d", num_c[i]);

	return 0;
}