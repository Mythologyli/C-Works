#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, x;

	scanf("%d", &num);
	for (; num >= 10; num = (num - x) / 10)
	{
		x = num % 10;
		printf("%d ", x);
	}
	printf("%d ", num);

	return 0;
}