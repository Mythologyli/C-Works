#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ����ȡһ���ַ����е����������ַ���'0'����'9'��������ת��Ϊһ�����������

�����ʽ��
������һ���и���һ��������80���ַ����Իس��������ַ�����

�����ʽ��
��һ�������ת�������������Ŀ��֤��������������ͷ�Χ��

����������
free82jeep5

���������
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