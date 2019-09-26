#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a = 0.0, b = 0.0, c = 0.0, d = 0.0;

	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("Sum = %.0f;", a + b + c + d);
	printf(" Average = %.1f", (a + b + c + d) / 4);

	return 0;
}