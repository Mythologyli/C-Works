#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, y1, x2, y2, x3, y3, a, b, c, half_L ,square_A;

	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	half_L = (a + b + c) / 2.0;
	square_A = half_L * (half_L - a) * (half_L - b) * (half_L - c);
	if (square_A <= 0.0)
		printf("Impossible");
	else
		printf("L = %.2f, A = %.2f", half_L * 2.0, sqrt(square_A));

	return 0;
}