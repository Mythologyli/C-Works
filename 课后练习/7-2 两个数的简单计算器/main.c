#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char calc = '!';
	int a = 0, b = 0;

	scanf("%d %c %d", &a, &calc, &b);
	switch (calc)
	{
	case '+':printf("%d", a + b); break;
	case '-':printf("%d", a - b); break;
	case '*':printf("%d", a * b); break;
	case '/':printf("%d", a / b); break;
	case '%':printf("%d", a % b); break;
	default:printf("ERROR");
	}

	return 0;
}