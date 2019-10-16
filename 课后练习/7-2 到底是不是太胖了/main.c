#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N;
	float H, W, SW;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%f", &H);
		scanf("%f", &W);
		SW = (H - 100.0) * 0.9 * 2.0;
		if (W >= SW * 1.1)
			printf("You are tai pang le!\n");
		else if (W <= SW * 0.9)
			printf("You are tai shou le!\n");
		else
			printf("You are wan mei!\n");
	}

	return 0;
}

