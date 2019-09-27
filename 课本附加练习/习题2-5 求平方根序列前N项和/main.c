#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int N = 0;
	double sum = 0.0;

	scanf("%d", &N);
	for (double num = 1.0; num <= (double)N; num = num + 1.0)
		sum = sum + sqrt(num);
	printf("sum = %.2f", sum);

	return 0;
}