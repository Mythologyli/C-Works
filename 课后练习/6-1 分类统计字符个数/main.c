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
	for (int i = 0; s[i] != '\0'; i++) //��ȡ��ĩ��\0ʱ��ֹ
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) //ͳ�ƴ�Сд��ĸ
			letter++;
		else if (s[i] == 32 || s[i] == 10) //ͳ�ƿո�ͻس�
			blank++;
		else if (s[i] >= 48 && s[i] <= 57) //ͳ������
			digit++;
		else other++; //ͳ�������ַ�
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}