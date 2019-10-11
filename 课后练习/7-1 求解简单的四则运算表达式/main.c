#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0.0, b = 0.0, result = 0.0;
	char calc = '0';

	scanf("%lf%c%lf", &a, &calc, &b);
	switch (calc)
	{
	case '+':
		result = a + b;
		printf("%.2f", result);
		break;
	case '-':
		result = a - b;
		printf("%.2f", result);
		break;
	case '*':
		result = a * b;
		printf("%.2f", result);
		break;
	case '/':
		if (b != 0)
		{
			result = a / b;
			printf("%.2f", result);
		}
		else printf("Divisor can not be 0!");
		break;
	default:
		printf("Unknown operator!");
	}

	return 0;
}