#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N = 0, odd = 0, num = 0;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 1)
			odd++;
	}
	printf("%d %d", odd, N - odd);

	return 0;
}