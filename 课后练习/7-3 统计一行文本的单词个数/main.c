#define _CRT_SECURE_NO_WARNINGS

/*
本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

输入格式:
输入给出一行字符。

输出格式:
在一行中输出单词个数。

输入样例:
Let's go to room 209.

输出样例:
5
*/

#include <stdio.h>

int main(void)
{
	int word = 0; //记录单词的数量
	char str[10000]; //字符串

	gets(str);

	for (int i = 0; str[i] != '\0'; i++) //从第一个字符开始读取，一直到\n结束
	{
		if ((str[i] != ' ' && str[i] != '\0') && (str[i + 1] == ' ' || str[i + 1] == '\0')) //检测词尾结构
			word++; 
	}

	printf("%d", word);

	return 0;
}