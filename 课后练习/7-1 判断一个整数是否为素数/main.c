#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	int num;
	bool prime = true;

	scanf("%d", &num);
	
	if (num <= 1)
		prime = false;
	else if (num > 2)
	{
		for (int n = 2; n <= sqrt(num); n++)
		{
			if ((num % n) == 0)
			{
				prime = false;
				break;
			}
		}
	}
	if (prime == true)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}