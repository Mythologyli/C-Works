#define _CRT_SECURE_NO_WARNINGS

/*
����Ҫ�󽫸�����n�������Ӵ�С����������

�����ʽ��
�����һ�и���һ��������10��������n���ڶ��и���n������������Կո�ָ���

�����ʽ��
��һ��������Ӵ�С��������У��������ּ���һ���ո���ĩ�����ж���ո�

����������
4
5 1 7 6

���������
7 6 5 1
*/

#include <stdio.h>

int main(void)
{
	int n, start_sub/*�������п�ʼ�ı�ǩ*/, max_sub/*�������������ֵ�ı�ǩ��Ĭ��Ϊstart_sub*/, temp;
	int num[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //����n����
		scanf("%d", &num[i]);

	for (start_sub = 0; start_sub < n; start_sub++)
	{
		max_sub = start_sub;
		for (int i = start_sub; i < n; i++) //�ҳ��������������ֵ�ı�ǩ
			if (num[i] > num[max_sub])
				max_sub = i;
		
		temp = num[start_sub];
		num[start_sub] = num[max_sub];
		num[max_sub] = temp; //����������е�һ���������������������ֵ�Ľ���
	}

	printf("%d", num[0]); //���n����
	for (int i = 1; i < n; i++) 
		printf(" %d", num[i]);

	return 0;
}