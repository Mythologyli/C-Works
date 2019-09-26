#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double fact(int n);

int main(void)
{
	int m = 0, n = 0;
	double result = 0.0;

	scanf("%d %d", &m, &n);
	result = fact(n) / (fact(m) * fact(n - m));
	printf("result = %.0f", result);

	return 0;
}

double fact(int n)
{
	double output_fact = 1.0;
	for (int num = 2; num <= n; num++)
		output_fact = output_fact * (double)num;
	
	return output_fact;
}