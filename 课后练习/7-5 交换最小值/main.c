#define _CRT_SECURE_NO_WARNINGS

/*
����Ҫ���д�����ҳ�������N�����е���Сֵ�����������һ��������������������������С���Ŀ��֤��Сֵ��Ψһ�ġ�

�����ʽ:
�����ڵ�һ���и���һ��������N��1��n��10�����ڶ��и���N�����������ּ��Կո�ָ���

�����ʽ:
��һ����˳���������������У�ÿ���������һ���ո�

��������:
5
8 2 5 1 4

�������:
1 2 5 8 4
*/

#include <stdio.h>

int main(void)
{
	int n, min_sub = 0/*��Сֵ���±꣬Ĭ��0*/, temp;
	int num[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //����n����
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //�ҳ���С�±�
	{
		if (num[min_sub] > num[i])
			min_sub = i;
	}

	temp = num[0];
	num[0] = num[min_sub];
	num[min_sub] = temp; //��ɽ���

	for (int i = 0; i < n; i++) //���n����
		printf("%d ", num[i]);

	return 0;
}