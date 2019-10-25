#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, guess, n;

	scanf("%d", &num);
	for (n = 1; n <= 7; n++)
	{
		scanf("%d", &guess);
		if (guess > num)
			printf("Too big\n");
		else if (guess < num)
			printf("Too small\n");
		else
		{
			break;
		}
	}
	if (guess == num)
		printf("Lucky You!");
	else
		printf("Game Over");
	return 0;
}