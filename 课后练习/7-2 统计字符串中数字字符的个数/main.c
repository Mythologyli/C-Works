#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
输入一个字符串，统计其中数字字符（'0'……'9'）的个数。

输入格式:
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

输出格式:
输出所统计的数字字符的个数。

输入样例:
Enter a string: It's 512?

输出样例:
3
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

int main(void)
{
	int num = 0;
	char str[81];

	gets(str); //存入字符串

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			num++;
	}

	printf("%d", num);

	return 0;
}