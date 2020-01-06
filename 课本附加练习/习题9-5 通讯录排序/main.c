#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。

输入格式:
输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。

输出格式:
按照年龄从大到小输出朋友的信息，格式同输出。

输入样例:
3
zhang 19850403 13912345678
wang 19821020 +86-0571-88018448
qian 19840619 13609876543

输出样例:
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
zhang 19850403 13912345678
*/

#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define NAME_LEN 10 //姓名最大长度
#define BIRTHDAY_LEN 8 //生日最大长度
#define PHONE_LEN 17 //电话号码最大长度
#define N_MAX 9 //最多人数
#define STR_LEN_MAX 17 //字符串最大长度

struct address //通讯录结构
{
	int n; //人数
	char name[N_MAX][NAME_LEN + 1];
	char birthday[N_MAX][BIRTHDAY_LEN + 1];
	char phone[N_MAX][PHONE_LEN + 1];
};

bool older(char* birthday_a, char* birthday_b); //判断a是否比b年龄大
void change_str(char* str_a, char* str_b); //交换字符串a和b

int main(void)
{
	struct address list;

	scanf("%d", &list.n);

	for (int i = 0; i < list.n; i++)
		scanf("%s%s%s", list.name[i], list.birthday[i], list.phone[i]);

	for (int i = 0; i < list.n; i++) //选择排序法
	{
		int max_i = i;

		for (int j = i + 1; j < list.n; j++)
		{
			if (older(list.birthday[j], list.birthday[max_i]) == true)
				max_i = j;
		}

		change_str(&list.name[i], &list.name[max_i]); //交换
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