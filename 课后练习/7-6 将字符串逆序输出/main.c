#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
将字符串逆序输出。输入一个字符串后，将其逆序输出。

输入格式：
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

输出格式：
在一行中输出逆序后的字符串。

输入样例：
C/C++

输出样例：
++C/C
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

int main(void)
{
	char str[81];

	gets(str);

	for (int i = strlen(str) - 1; i >= 0; i--)
		putchar(str[i]);

	return 0;
}