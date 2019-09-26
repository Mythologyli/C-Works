#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double calc(int x); /*计算m^​2​​+1/m*/

int main(void)
{
	int m, n;
	double sum = 0.0;

	scanf("%d %d", &m, &n);
	for (int num = m; num <= n; num++)
		sum = sum + calc(num);
	printf("sum = %.6f", sum);

	return 0;
}

double calc(int x)
{
	double result;
	result = pow((double)x, 2.0) + 1.0 / (double)x;
	return result;
}
