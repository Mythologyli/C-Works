#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int reverse(int number);

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}

#include <math.h>

int reverse(int number)
{
	int i, sum = 0, n = 0;
	char num[10];
	
	sprintf(num, "%d", number); //������ת��Ϊ�ַ���
	
	if (number >= 0) //���ڵ���0ʱ���������һλ����
		i = 0;
	else i = 1; //С��0ʱ���ӵڶ�λ����

	for (; num[i] != '\0'; i++) //���ζ�ÿλ�����д���
		sum += (num[i] - '0') * pow(10, n++); //�����������ľ���ֵ
	
	if (number < 0) //��numberС��0ʱ��ȡ��ֵ
		sum = -sum;

	return sum;
}