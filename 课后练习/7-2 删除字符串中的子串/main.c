#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。

输入格式：
输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。

输出格式：
在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

输入样例：
Tomcat is a male ccatat
cat

输出样例：
Tom is a male
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
由于去掉S2可能导致新的S2产生，故必须在一次完整清除后再检查一次。如无S2，则结束；如有，则重新再来
*/

int main(void)
{
	char S1[81], S2[81];
	int length_S1/*S1的长度*/, length_S2/*S2的长度*/, mount_S2 = 0/*S1中S2的数量*/, check_time = 0/*检查次数，需第二次检查无S2才可通过*/;
	char* first_of_S2 = NULL/*S2首字符在S1中的位置*/;
	bool found_S2;

	gets(S1);
	gets(S2);

	length_S1 = strlen(S1);
	length_S2 = strlen(S2);

	do
	{
		for (int i = 0; i < length_S1; i++)
		{
			found_S2 = false; //默认找不到S2

			first_of_S2 = strchr(S1 + i, S2[0]);

			if (first_of_S2 == NULL) //没有S2首字符，说明无S2，直接跳出
				break;
			else
			{
				found_S2 = true; //在找到首字符的情况下，先假设找到的是S2

				for (int i = 0; i < length_S2; i++) //判断找到的是否为S2
				{
					if (*(first_of_S2 + i) != S2[i]) //发现有不相同字符，说明不是S2，跳出
					{
						found_S2 = false;
						break;
					}
				}
			}

			if (found_S2 == true) //如果找到的是S2
			{
				for (int i = 0; i < length_S1 - (first_of_S2 - S1); i++) //将后方字符前移
					*(first_of_S2 + i) = *(first_of_S2 + i + length_S2);
				check_time = 0; //发现S2，检查数归零
				mount_S2++;
			}
		}

		check_time++; //完成一次完整检查
	} while (check_time < 2); //第二次检查无S2，才可结束

	for (int i = 0; i < length_S1 - mount_S2 * length_S2; i++) //输出前length_S1 - mount_S2 * length_S2个字符
		putchar(S1[i]);

	return 0;
}