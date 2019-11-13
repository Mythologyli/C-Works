#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main(void)
{
	int m, n;

	scanf("%d %d", &m, &n);
	if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

	return 0;
}

#include <math.h>

int narcissistic(int number)
{
	int n[5] = {0};
	int i, sum = 0;
	
	for (i = 0; number >= pow(10, i); i++)
	{
		n[i] = number / (int)pow(10, i) % 10;
	}
	
	for (int j = 0; j <= i - 1; j++)
		sum = sum + pow(n[j], i);
	
	if (number == sum)
		return 1;
	else return 0;
}

void PrintN(int m, int n)
{
	for (int i = m + 1; i < n; i++)
	{
		if (narcissistic(i))
			printf("%d\n", i);
	}
}