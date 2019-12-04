#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
输入一个字符串，判断该字符串是否为回文。回文就是字符串中心对称，从左向右读和从右向左读的内容是一样的。

输入格式:
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

输出格式:
输出在第1行中输出字符串。如果它是回文字符串，在第2行中输出Yes，否则输出No。

输入样例1:
level

输出样例1:
level
Yes

输入样例2:
1 + 2 = 2 + 1 =

输出样例2:
1 + 2 = 2 + 1 =
No
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	char str[81];
	bool palindrome = true;
	
	gets(str); //存入字符串

	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j]) //若不相同，跳出
		{
			palindrome = false;
			break;
		}
	}

	printf("%s\n", str);
	if (palindrome == true)
		printf("Yes");
	else printf("No");

	return 0;
}