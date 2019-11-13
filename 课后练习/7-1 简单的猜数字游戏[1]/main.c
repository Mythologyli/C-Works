#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);
	if (num == 38)
		printf("Good Guess!");
	else if (num > 38)
		printf("Too big!");
	else if (num < 38)
		printf("Too small!");
	
	return 0;
}