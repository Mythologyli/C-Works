#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
输入一个以#结束的字符串，滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，输出该字符串并将其转换为十进制数后输出。

输入格式:
输入在一行中给出一个不超过80个字符长度的、以#结束的非空字符串。

输出格式:
第1行中输出已滤去所有非十六进制字符的字符串。 在第2行中输出转换后的十进制数。题目保证输出结果在长整型范围内。

输入样例:
-zy1+Ak0-bq?#

输出样例:
1A0b
6667
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>

int main(void)
{
	int num, i, j;
	char str[81], str_hex[81];

	gets(str);

	for (i = 0, j = 0; str[i] != '#'; i++)
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
		{
			str_hex[j] = str[i];
			j++;
		}
	}
	
	if (j > 0)
	{
		str_hex[j] = '\0';

		puts(str_hex);
		sscanf(str_hex, "%x", &num);
		printf("%d", num);
	}
	else puts("\n0");

	return 0;
}