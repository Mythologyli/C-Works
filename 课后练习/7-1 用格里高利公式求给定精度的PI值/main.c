#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double eps, pi = 0.0, n = 0.0;
    
	scanf("%lf", &eps);
	do{
		n++;
		pi = pi + 4.0 * (1.0 / (2.0 * n - 1.0)) * pow(-1.0, n + 1.0);
	} while ((1.0 / (2.0 * n - 1.0)) >= eps);
	
	printf("Pi = %.4f", pi);
	
	return 0;
}