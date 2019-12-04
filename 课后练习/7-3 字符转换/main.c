#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。

输入格式：
输入在一行中给出一个不超过80个字符且以回车结束的字符串。

输出格式：
在一行中输出转换后的整数。题目保证输出不超过长整型范围。

输入样例：
free82jeep5

输出样例：
825
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

int main(void)
{
	char str[81], str_num[81];
	int num;

	gets(str);

	for (int i = 0, j = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			str_num[j] = str[i];
			j++;
		}
	}

	sscanf(str_num, "%d", &num);
	printf("%d", num);

	return 0;
}