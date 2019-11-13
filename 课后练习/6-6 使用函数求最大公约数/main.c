#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int gcd(int x, int y);

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));

	return 0;
}

int gcd(int x, int y)
{
	int min = x;
	if (x > y)
		min = y;
	for (int i = min; ; i--)
	{
		if (x / i == (float)x / i && y / i == (float)y / i)
			return i;
	}
}
