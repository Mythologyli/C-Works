#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����һ���ַ������жϸ��ַ����Ƿ�Ϊ���ġ����ľ����ַ������ĶԳƣ��������Ҷ��ʹ����������������һ���ġ�

�����ʽ:
������һ���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ�����

�����ʽ:
����ڵ�1��������ַ�����������ǻ����ַ������ڵ�2�������Yes���������No��

��������1:
level

�������1:
level
Yes

��������2:
1 + 2 = 2 + 1 =

�������2:
1 + 2 = 2 + 1 =
No
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	char str[81];
	bool palindrome = true;
	
	gets(str); //�����ַ���

	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j]) //������ͬ������
		{
			palindrome = false;
			break;
		}
	}

	printf("%s\n", str);
	if (palindrome == true)
		printf("Yes");
	else printf("No");

	return 0;
}