#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
	int m, n, t;

	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);

	return 0;
}

int fib(int n) //���ص�n��Fibonacci��
{
	int fib[21] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ,377, 610, 987, 1597, 2584, 4181, 6765 ,10946}; //�������
	return fib[n - 1];
}

void PrintFN(int m, int n) //��һ�������������Χ[m, n]�ڵ�����Fibonacci��
{
	int fibonacci = 0; //Ĭ��û��Fibonacci��
	for (int i = 1, space = 0/*��ʾ���ӿո�*/; fib(i) <= n; i++) //�ӵ�һ������ʼ�Ƚϣ�������nʱ����
	{
		if (fib(i) < m)
			continue;

		fibonacci = 1; //��Fibonacci��

		if (space == 0)
		{
			printf("%d", fib(i));
			space = 1; //��ʾ�Ժ�Ҫ�ӿո�
		}
		else printf(" %d", fib(i));
	}
	if (fibonacci == 0) //��û��Fibonacci���������Ϣ
		printf("No Fibonacci number");
}