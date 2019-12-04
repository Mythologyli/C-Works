#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求编写程序，将给定字符串中的字符，按照ASCII码顺序从小到大排序后输出。

输入格式：
输入是一个以回车结束的非空字符串（少于80个字符）。

输出格式：
输出排序后的结果字符串。

输入样例：
ebE?9

输出样例：
9?Ebe
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>

int main(void)
{
	int start_sub/*无序字符开始的标签*/, min_sub/*无序字符中最大值的标签，默认为start_sub*/, n;
	char temp;
	char str[81];

	gets(str);

	n = strlen(str);
	for (start_sub = 0; start_sub < n; start_sub++)
	{
		min_sub = start_sub;
		for (int i = start_sub; i < n; i++) //找出无序字符中最小值的标签
			if (str[i] < str[min_sub])
				min_sub = i;

		temp = str[start_sub];
		str[start_sub] = str[min_sub];
		str[min_sub] = temp; //完成无序字符第一个数域与无序字符中最小值的交换
	}

	puts(str);

	return 0;
}