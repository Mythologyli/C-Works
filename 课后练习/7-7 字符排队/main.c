#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ���д���򣬽������ַ����е��ַ�������ASCII��˳���С��������������

�����ʽ��
������һ���Իس������ķǿ��ַ���������80���ַ�����

�����ʽ��
��������Ľ���ַ�����

����������
ebE?9

���������
9?Ebe
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>

int main(void)
{
	int start_sub/*�����ַ���ʼ�ı�ǩ*/, min_sub/*�����ַ������ֵ�ı�ǩ��Ĭ��Ϊstart_sub*/, n;
	char temp;
	char str[81];

	gets(str);

	n = strlen(str);
	for (start_sub = 0; start_sub < n; start_sub++)
	{
		min_sub = start_sub;
		for (int i = start_sub; i < n; i++) //�ҳ������ַ�����Сֵ�ı�ǩ
			if (str[i] < str[min_sub])
				min_sub = i;

		temp = str[start_sub];
		str[start_sub] = str[min_sub];
		str[min_sub] = temp; //��������ַ���һ�������������ַ�����Сֵ�Ľ���
	}

	puts(str);

	return 0;
}