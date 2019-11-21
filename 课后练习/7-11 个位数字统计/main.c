#define _CRT_SECURE_NO_WARNINGS

/*
给定一个整数n，统计每种不同的个位数字出现的次数。例如，给定n=100811，则有2个0，3个1，1个8。

输入格式：
输入一个不超过长整型范围的整数n。

输出格式：
对n中每一种不同的各位数字，以 D:M的格式在一行中输出该位数字 D及其在 n 中出现的次数 M。要求按 D 的升序输出。

输入样例：
100811

输出样例：
0:2
1:3
8:1
*/

#include <stdio.h>

int main(void)
{
	int num[10] = { 0 }; //分别存放0-9十个数的个数
	char number[11]; //存放该数字

	gets(number); //将数字转化为字符串

	for (int i = 0; number[i] != '\0'; i++)
		num[number[i] - '0']++;

	for (int i = 0; i <= 9; i++)
	{
		if (num[i] != 0) //若有该数，则输出该数及其个数
			printf("%d:%d\n", i, num[i]);
	}

	return 0;
}