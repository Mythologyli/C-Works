#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, count = 1;

	scanf("%d", &num);
	num = abs(num);

	for (int n = 10; num >= n; n = n * 10)
		count++;
	printf("%d", count);

	return 0;
}