#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number, score, max = 0;

	scanf("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		scanf("%d", &score);
		if (score > max)
			max = score;
	}
	printf("%d", max);

	return 0;
}