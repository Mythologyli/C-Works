#define _CRT_SECURE_NO_WARNINGS

/*
����Ҫ���д���򣬽������n��������������a�У�Ȼ�������Щ����ƽ��ֵ����������д���ƽ��ֵ������

�����ʽ:
�����ڵ�1���и���һ��������n��1��n��10������2������n������������Կո�ָ�����Ŀ��֤���ݲ����������������ķ�Χ��

�����ʽ:
����ڵ�1�и���ƽ��ֵ������2λС�����ڵ�2��������д���ƽ��ֵ������ÿ�����ĺ�����һ���ո����û������������������������С�
��������n������Ч��Χ�ڣ�����һ�������"Invalid."��

��������1:
10
55 23 8 11 22 89 0 -1 78 186

�������1:
47.10
55 89 78 186

��������2:
0

�������2:
Invalid.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n >= 1 && n <= 10) //n�ڷ�Χ��
	{
		long int num[10];
		long int sum = 0;
		double average;
		bool bigger_num = false; //����Ƿ���ڴ���average����

		for (int i = 0; i < n; i++)
		{
			scanf("%ld", &num[i]); //��n����¼������num
			sum += num[i]; //�������
		}

		average = (double)sum / n; //����ƽ��ֵ
		printf("%.2f\n", average);

		for (int i = 0; i < n; i++)
		{
			if (num[i] > average)
			{
				bigger_num = true; //��⵽�д���average����
				printf("%ld ", num[i]); //�������ƽ��ֵ����
			}
		}

		if (bigger_num == false) //���û�д���average���������ٲ���һ������
			putchar('\n');
	}
	else printf("Invalid."); //n������Ч��Χ��

	return 0;
}