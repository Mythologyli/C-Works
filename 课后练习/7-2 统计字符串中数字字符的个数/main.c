#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����һ���ַ�����ͳ�����������ַ���'0'����'9'���ĸ�����

�����ʽ:
������һ���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ�����

�����ʽ:
�����ͳ�Ƶ������ַ��ĸ�����

��������:
Enter a string: It's 512?

�������:
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

	gets(str); //�����ַ���

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			num++;
	}

	printf("%d", num);

	return 0;
}