#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����һ����#�������ַ�������ȥ���еķ�ʮ�������ַ������ִ�Сд�������һ���µı�ʾʮ���������ֵ��ַ�����������ַ���������ת��Ϊʮ�������������

�����ʽ:
������һ���и���һ��������80���ַ����ȵġ���#�����ķǿ��ַ�����

�����ʽ:
��1�����������ȥ���з�ʮ�������ַ����ַ����� �ڵ�2�������ת�����ʮ����������Ŀ��֤�������ڳ����ͷ�Χ�ڡ�

��������:
-zy1+Ak0-bq?#

�������:
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