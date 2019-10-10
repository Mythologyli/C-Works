#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float x = 0.0, y = 0.0;

	scanf("%f", &x);
	if (x > 0.0 && x <= 15.0)
		y = 4.0 * x / 3.0;
	else if (x > 15.0)
		y = 2.5 * x - 10.5;
	printf("f(%.2f) = %.2f", x, y);

	return 0;
}