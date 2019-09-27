#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int fact(int x);

int main(void)
{
	int N = 0, sum = 0;

	scanf("%d", &N);
	int number;
	for (number = 1; number <= N; number++)
		sum = sum + fact(number);
	printf("%d", sum);

	return 0;
}

int fact(int x)
{
	int result = 1, num;
	for (num = 1; num <= x; num++)
		result = result * num;
	
	return result;
}