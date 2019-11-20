#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
	int a, n;

	scanf("%d %d", &a, &n);
	printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
	printf("s = %d\n", SumA(a, n));

	return 0;
}

#include <math.h>

int fn(int a, int n)
{
	int an = 0;
	for (int i = 1; i <= n; i++)
		an = an + a * pow(10, i - 1);

	return an;
}

int SumA(int a, int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + fn(a, i);
	return sum;
}