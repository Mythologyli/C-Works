#define _CRT_SECURE_NO_WARNINGS

/*
����Ҫ���д�����ҳ�������n�����е���Сֵ�����Ӧ����С�±꣨�±��0��ʼ����

�����ʽ:
�����ڵ�һ���и���һ��������n��1��n��10�����ڶ�������n���������ÿո�ֿ���

�����ʽ:
��һ���������Сֵ����Сֵ����С�±꣬�м���һ���ո�ֿ���

��������:
6
2 9 -1 8 -1 6

�������:
-1 2
*/

#include <stdio.h>

int main()
{
	int n, min_sub = 0/*��Сֵ���±꣬Ĭ��0*/;
	int num[10];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) //����n����
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //�ҳ���С�±�
	{
		if (num[min_sub] > num[i])
			min_sub = i;
	}

	printf("%d %d", num[min_sub], min_sub);

	return 0;
}