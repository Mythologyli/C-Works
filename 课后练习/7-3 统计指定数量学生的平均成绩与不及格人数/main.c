#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N = 0, count = 0, score = 0, sum = 0;
	float average = 0.0;

	scanf("%d", &N);
	if (N == 0)
	{
		printf("average = 0.00\n");
		printf("count = 0");
	}
	else
	{
		int i;
		for (i = 1; i <= N; i++)
		{
			scanf("%d", &score);
			if (score < 60)
				count++;
			sum = sum + score;
		}
		average = (float)sum / (float)N;
		printf("average = %.2f\n", average);
		printf("count = %d", count);
	}

	return 0;
}