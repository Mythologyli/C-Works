#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 1, b = 1, c, N, i = 3;

	scanf("%d", &N);
	if (N < 1)
		printf("Invalid.");
	else if (N == 1)
		printf("          1");
	else
	{
		printf("          1          1");
		while (i <= N)
		{
			c = a + b;
			if (i % 5 != 0)
				printf("%11d", c);
			else printf("%11d\n", c);
			a = b;
			b = c;
			i++;
		}
	}

	return 0;
}