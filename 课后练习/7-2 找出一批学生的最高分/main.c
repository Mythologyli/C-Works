#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score, max = 0;

	scanf("%d", &score);
	while (score >= 0)
	{
		if (score > max)
			max = score;
		scanf("%d", &score);
	}
	printf("%d", max);
	return 0;
}