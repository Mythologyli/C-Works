#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int factorial(int num);

int main(void)
{
	int num, result = 0;

	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		result = result + factorial(i);
	printf("%d", result);

	return 0;
}

int factorial(int num)
{
	int result = 1;

	for (int i = 1; i <= num; i++)
		result = result * i;

	return result;
}