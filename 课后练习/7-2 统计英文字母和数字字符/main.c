#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int letter = 0, digit = 0, other = 0;
	char c = 0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%c", &c);
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			letter++;
		else if (c >= 48 && c <= 57)
			digit++;
		else other++;
	}
	printf("letter = %d, digit = %d, other = %d", letter, digit, other);

	return 0;
}