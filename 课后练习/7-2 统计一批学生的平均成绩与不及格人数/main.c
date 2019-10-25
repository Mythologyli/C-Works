#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int count = 0;
	double sum = 0.0, num = 0.0, score;

	while (1)
	{
		scanf("%lf", &score);
		if (score < 0.0)
			break;
		if (score < 60.0)
			count++;
		num++;
		sum = sum + score;
	}
	if (score < 0.0 && num == 0.0)
	{
		printf("Average = 0.00");
	}
	else
	{
		printf("Average = %.2f\n", sum / num);
		printf("Count = %d", count);
	}

	return 0;
}