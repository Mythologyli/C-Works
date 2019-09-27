#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>

int main(void)
{
	int N;
	double result = 0.0;

	scanf("%d", &N);
	for (double num = 1.0; num <= (double)N; num = num + 1.0)
		result = result + pow(-1.0, num + 1.0) * num / (2 * num - 1.0);
	printf("%.3f", result);

	return 0;
}