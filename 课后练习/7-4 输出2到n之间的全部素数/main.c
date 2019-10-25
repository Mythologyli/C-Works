#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int num);

int main(void)
{
	long int num, n = 2, i = 0; //n表示当前被判断的数，i表示素数的个数

	scanf("%ld", &num);
	while (n <= num)
	{
		if (prime(n) == true)
		{
			i++;
			if (i % 10 != 0)
				printf("%6d", n);
			else printf("%6d\n", n);
		}
		n++;
	}

	return 0;
}

bool prime(int num)
{
	bool prime = true;

	if (num > 2)
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

	return prime;
}