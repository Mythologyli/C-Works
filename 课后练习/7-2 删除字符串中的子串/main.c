#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����2���ַ���S1��S2��Ҫ��ɾ���ַ���S1�г��ֵ������Ӵ�S2��������ַ����в��ܰ���S2��

�����ʽ��
������2���зֱ����������80���ַ����ȵġ��Իس�������2���ǿ��ַ�������ӦS1��S2��

�����ʽ��
��һ�������ɾ���ַ���S1�г��ֵ������Ӵ�S2��Ľ���ַ�����

����������
Tomcat is a male ccatat
cat

���������
Tom is a male
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
����ȥ��S2���ܵ����µ�S2�������ʱ�����һ������������ټ��һ�Ρ�����S2������������У�����������
*/

int main(void)
{
	char S1[81], S2[81];
	int length_S1/*S1�ĳ���*/, length_S2/*S2�ĳ���*/, mount_S2 = 0/*S1��S2������*/, check_time = 0/*����������ڶ��μ����S2�ſ�ͨ��*/;
	char* first_of_S2 = NULL/*S2���ַ���S1�е�λ��*/;
	bool found_S2;

	gets(S1);
	gets(S2);

	length_S1 = strlen(S1);
	length_S2 = strlen(S2);

	do
	{
		for (int i = 0; i < length_S1; i++)
		{
			found_S2 = false; //Ĭ���Ҳ���S2

			first_of_S2 = strchr(S1 + i, S2[0]);

			if (first_of_S2 == NULL) //û��S2���ַ���˵����S2��ֱ������
				break;
			else
			{
				found_S2 = true; //���ҵ����ַ�������£��ȼ����ҵ�����S2

				for (int i = 0; i < length_S2; i++) //�ж��ҵ����Ƿ�ΪS2
				{
					if (*(first_of_S2 + i) != S2[i]) //�����в���ͬ�ַ���˵������S2������
					{
						found_S2 = false;
						break;
					}
				}
			}

			if (found_S2 == true) //����ҵ�����S2
			{
				for (int i = 0; i < length_S1 - (first_of_S2 - S1); i++) //�����ַ�ǰ��
					*(first_of_S2 + i) = *(first_of_S2 + i + length_S2);
				check_time = 0; //����S2�����������
				mount_S2++;
			}
		}

		check_time++; //���һ���������
	} while (check_time < 2); //�ڶ��μ����S2���ſɽ���

	for (int i = 0; i < length_S1 - mount_S2 * length_S2; i++) //���ǰlength_S1 - mount_S2 * length_S2���ַ�
		putchar(S1[i]);

	return 0;
}