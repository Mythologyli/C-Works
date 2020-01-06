#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����n�����ѵ���Ϣ���������������ա��绰���룬����Ҫ���д���򣬰�������Ӵ�С��˳���������ͨѶ¼����Ŀ��֤�����˵����վ�����ͬ��

�����ʽ:
�����һ�и���������n��<10�������n�У�ÿ�а��ա����� ���� �绰���롱�ĸ�ʽ����һλ���ѵ���Ϣ�����С��������ǳ��Ȳ�����10��Ӣ����ĸ��ɵ��ַ����������ա���yyyymmdd��ʽ�����ڣ����绰���롱�ǲ�����17λ�����ּ�+��-��ɵ��ַ�����

�����ʽ:
��������Ӵ�С������ѵ���Ϣ����ʽͬ�����

��������:
3
zhang 19850403 13912345678
wang 19821020 +86-0571-88018448
qian 19840619 13609876543

�������:
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
zhang 19850403 13912345678
*/

#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define NAME_LEN 10 //������󳤶�
#define BIRTHDAY_LEN 8 //������󳤶�
#define PHONE_LEN 17 //�绰������󳤶�
#define N_MAX 9 //�������
#define STR_LEN_MAX 17 //�ַ�����󳤶�

struct address //ͨѶ¼�ṹ
{
	int n; //����
	char name[N_MAX][NAME_LEN + 1];
	char birthday[N_MAX][BIRTHDAY_LEN + 1];
	char phone[N_MAX][PHONE_LEN + 1];
};

bool older(char* birthday_a, char* birthday_b); //�ж�a�Ƿ��b�����
void change_str(char* str_a, char* str_b); //�����ַ���a��b

int main(void)
{
	struct address list;

	scanf("%d", &list.n);

	for (int i = 0; i < list.n; i++)
		scanf("%s%s%s", list.name[i], list.birthday[i], list.phone[i]);

	for (int i = 0; i < list.n; i++) //ѡ������
	{
		int max_i = i;

		for (int j = i + 1; j < list.n; j++)
		{
			if (older(list.birthday[j], list.birthday[max_i]) == true)
				max_i = j;
		}

		change_str(&list.name[i], &list.name[max_i]); //����
		change_str(&list.birthday[i], &list.birthday[max_i]);
		change_str(&list.phone[i], &list.phone[max_i]);
	}

	for (int i = 0; i < list.n; i++)
		printf("%s %s %s\n", list.name[i], list.birthday[i], list.phone[i]);

	return 0;
}

bool older(char* birthday_a, char* birthday_b)
{
	char str_year_a[5] = { birthday_a[0], birthday_a[1], birthday_a[2], birthday_a[3], '\0' };
	int year_a = atoi(str_year_a);
	char str_month_a[3] = { birthday_a[4], birthday_a[5], '\0' };
	int month_a = atoi(str_month_a);
	char str_day_a[3] = { birthday_a[6], birthday_a[7], '\0' };
	int day_a = atoi(str_day_a);
	char str_year_b[5] = { birthday_b[0], birthday_b[1], birthday_b[2], birthday_b[3], '\0' };
	int year_b = atoi(str_year_b);
	char str_month_b[3] = { birthday_b[4], birthday_b[5], '\0' };
	int month_b = atoi(str_month_b);
	char str_day_b[3] = { birthday_b[6], birthday_b[7], '\0' };
	int day_b = atoi(str_day_b);

	if (year_a < year_b)
		return true;
	else if (year_a > year_b)
		return false;
	else if (month_a < month_b)
		return true;
	else if (month_a > month_b)
		return false;
	else if (day_a < day_b)
		return true;
	else if (day_a > day_b)
		return false;
	else return false;
}

void change_str(char* str_a, char* str_b)
{
	char str_temp[STR_LEN_MAX + 1];

	strcpy(str_temp, str_a);
	strcpy(str_a, str_b);
	strcpy(str_b, str_temp);
}