#define _CRT_SECURE_NO_WARNINGS

/*
����Ҫ���д���򣬽������n��������������a�У��ж������Ƿ񰴴Ӵ�С�Ĵ������к���?

�����ʽ:
�����ڵ�1���и���һ��������n��1��n��100������2������n������������Կո�ָ�����Ŀ��֤���ݲ����������������ķ�Χ��

�����ʽ:
�����n�������ǰ��մӴ�С�Ĵ������еģ�����һ���������Yes����������һ���������No����

��������1:
6
1 3 6 40 12 50

�������1:
No

��������2:
5
10 8 8 3 1

�������2:
Yes
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;
	int num[100];
	bool regular = true;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) //����n����
		scanf("%d", &num[i]);

	for (int i = 1; i < n; i++) //����ȷ�������쳣
	{
		if (num[i] > num[i - 1])
		{
			regular = false;
			break;
		}
	}

	if (regular == true)
		printf("Yes");
	else printf("No");


	return 0;
}