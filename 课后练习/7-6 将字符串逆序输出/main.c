#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
���ַ����������������һ���ַ����󣬽������������

�����ʽ��
������һ���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ�����

�����ʽ��
��һ��������������ַ�����

����������
C/C++

���������
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