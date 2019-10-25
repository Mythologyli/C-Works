#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number = 0;
	
	printf("[1] crisps\n[2] popcorn\n[3] chocolate\n[4] cola\n[0] exit\n");
	for (int i = 1; i <= 5; i++)
	{
		scanf("%d", &number);
		switch (number)
		{
		case 1:printf("price = 3.0\n"); break;
		case 2:printf("price = 2.5\n"); break;
		case 3:printf("price = 4.0\n"); break;
		case 4:printf("price = 3.5\n"); break;
		case 0:i = 6; break;
		default: printf("price = 0.0\n");
		}
	}
	printf("Thanks");

	return 0;
}