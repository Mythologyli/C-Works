#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float wage = 0.0, tax_rate = -0.0, tax = 0.0;

	scanf("%f", &wage);
	if (wage > 1600.0 && wage <= 2500)
		tax_rate = 0.05;
	else if (wage > 2500.0 && wage <= 3500)
		tax_rate = 0.1;
	else if (wage > 3500.0 && wage <= 4500)
		tax_rate = 0.15;
	else if (wage > 4500.0)
		tax_rate = 0.2;
	tax = tax_rate * (wage - 1600.0);
	printf("%.2f", tax);

	return 0;
}