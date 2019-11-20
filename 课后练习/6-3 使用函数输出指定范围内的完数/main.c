#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
	int i, m, n;

	scanf("%d %d", &m, &n);
	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
	PrintPN(m, n);

	return 0;
}

int factorsum(int number)
{
	int sum = 0;
	
	if (number == 1) //1�ǳ����⣬��������
		sum = 1;
	else
	{
		for (int i = 1; i <= number / 2; i++)
		{
			if (number / i == (float)number / i) //�ж�number / i�Ƿ�Ϊ����
				sum += i;
		}
	}

	return sum;
}

void PrintPN(int m, int n)
{
	int perfect = 0; //Ĭ���Ҳ�������
	
	for (int num = m; num <= n; num++) //��mn���ÿ�������д���
	{
		if (num == factorsum(num)) //��Ϊ����ʱ��������ʾ
		{
			perfect = 1; //�ҵ�����
			
			printf("%d = 1", num); //��ʾͨ��ǰ����Ҳ�ų��������1
			for (int i = 2; i <= num / 2; i++) //��Ϊ���ӣ�������ʾ
			{
				if (num / i == (float)num / i)
					printf(" + %d", i);
			}
			putchar('\n'); //һ�������ɺ���
		}
	}

	if (perfect == 0) //�Ҳ��������������Ϣ
		printf("No perfect number");
}