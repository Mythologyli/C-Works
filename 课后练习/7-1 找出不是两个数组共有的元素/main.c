#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
���������������飬����Ҫ���ҳ��������߹��е�Ԫ�ء�

�����ʽ:
����ֱ��������и��������������飬ÿ���ȸ���������N����20���������N������������Կո�ָ���

�����ʽ:
��һ���а������ָ�����˳��������������鹲�е�Ԫ�أ����ּ��Կո�ָ�������ĩ�����ж���Ŀո���Ŀ��֤���ٴ���һ�����������֡�ͬһ���ֲ��ظ������

��������:
10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1

�������:
3 5 -15 6 4 1
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
#include <stdbool.h>

int main(void)
{
	int N_a, N_b/*ÿ��������Ԫ�ص�����*/, i_c = 0/*num_c���±�*/;
	int num_a[20], num_b[20], num_c[20]/*���治�������鹲�е�Ԫ��*/;
	bool is_num_c, is_repeat;

	scanf("%d", &N_a);
	for (int i = 0; i < N_a; i++) //����������������
		scanf("%d", &num_a[i]);

	scanf("%d", &N_b);
	for (int i = 0; i < N_b; i++)
		scanf("%d", &num_b[i]);

	for (int i_a = 0; i_a < N_a; i_a++)
	{
		is_num_c = true, is_repeat = false;

		for (int i = 0; i < i_a; i++) //����Ƿ��ظ�
		{
			if (num_a[i] == num_a[i_a])
			{
				is_repeat = true;
				break;
			}
		}

		if (is_repeat == true) //����ظ���������������һ��ѭ��
			continue;

		for (int i_b = 0; i_b < N_b; i_b++)
		{
			if (num_b[i_b] == num_a[i_a])
			{
				is_num_c = false;
				break;
			}
		}

		if (is_num_c == true)
		{
			num_c[i_c] = num_a[i_a];
			i_c++;
		}
	}

	for (int i_b = 0; i_b < N_b; i_b++)
	{
		is_num_c = true, is_repeat = false;

		for (int i = 0; i < i_b; i++) //����Ƿ��ظ�
		{
			if (num_b[i] == num_b[i_b])
			{
				is_repeat = true;
				break;
			}
		}

		if (is_repeat == true) //����ظ���������������һ��ѭ��
			continue;

		for (int i_a = 0; i_a < N_a; i_a++)
		{
			if (num_a[i_a] == num_b[i_b])
			{
				is_num_c = false;
				break;
			}
		}

		if (is_num_c == true)
		{
			num_c[i_c] = num_b[i_b];
			i_c++;
		}
	}

	printf("%d", num_c[0]);
	for (int i = 1; i < i_c; i++)
		printf(" %d", num_c[i]);

	return 0;
}