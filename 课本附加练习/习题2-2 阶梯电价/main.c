#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float consumption = 0.0, cost = 0.0;

	scanf("%f", &consumption);

	if (consumption < 0.0)
	{
		printf("Invalid Value!");

		return 0;
	}
	else
	{
		if (consumption <= 50.0)
		{
			cost = 0.53 * consumption;
		}
		else
		{
			cost = 0.53 * 50.0 + (0.53 + 0.05) * (consumption - 50.0);
		}
	}
	printf("cost = %.2f", cost);

	return 0;
}
