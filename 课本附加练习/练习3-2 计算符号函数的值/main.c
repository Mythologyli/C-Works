#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0, result = 2; /*when the result didn't be changed the output would be 2*/

	scanf("%d", &n);
	if (n < 0)
	{
		result = -1;
	}
	else
	{
		if (n == 0)
		{
			result = 0;
		}
		else
		{
			if (n > 0)
			{
				result = 1;
			}
		}
	}
	printf("sign(%d) = %d", n, result);

	return 0;
}