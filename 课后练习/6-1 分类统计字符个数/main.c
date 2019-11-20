#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);

int main()
{
	char s[MAXS];
	gets(s);
	
	StringCount(s);

	return 0;
}

void StringCount(char s[])
{
	int letter = 0, blank = 0, digit = 0, other = 0;
	for (int i = 0; s[i] != '\0'; i++) //读取到末端\0时终止
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) //统计大小写字母
			letter++;
		else if (s[i] == 32 || s[i] == 10) //统计空格和回车
			blank++;
		else if (s[i] >= 48 && s[i] <= 57) //统计数字
			digit++;
		else other++; //统计其他字符
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}