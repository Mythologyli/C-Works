#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main()
{
	int m, n, i, cnt;

	scanf("%d %d", &m, &n);
	if (prime(m) != 0) printf("%d is a prime number\n", m);
	if (m < 6) m = 6;
	if (m % 2) m++;
	cnt = 0;
	for (i = m; i <= n; i += 2) {
		Goldbach(i);
		cnt++;
		if (cnt % 5) printf(", ");
		else printf("\n");
	}

	return 0;
}

int prime(int p)
{
	int prime = 1;
	
	if (p <= 1)
		prime = 0;
	else if (p > 2)
	{
		for (int n = 2; n <= sqrt(p); n++)
		{
			if ((p % n) == 0)
			{
				prime = 0;
				break;
			}
		}
	}

	return prime;
}

void Goldbach(int n)
{
	int p = 1, q;

	do
	{
		p++;
		q = n - p;
	} while (prime(p) == 0 || prime(q) == 0);

	printf("%d=%d+%d", n, p, q);
}
