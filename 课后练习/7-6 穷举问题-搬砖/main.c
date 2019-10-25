#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n, x, y, z;
	bool solution = false;

	scanf("%d", &n);
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n - x; y++)
		{
			z = n - x - y;
			if (3 * x + 2 * y + 0.5 * z == n)
			{
				printf("men = %d, women = %d, child = %d\n", x, y, z);
				solution = true;
			}
		}
	}
	if (solution == false)
		printf("None");

	return 0;
}