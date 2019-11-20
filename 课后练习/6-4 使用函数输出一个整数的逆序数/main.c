#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int reverse(int number);

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}

#include <math.h>

int reverse(int number)
{
	int i, sum = 0, n = 0;
	char num[10];
	
	sprintf(num, "%d", number); //将数字转化为字符串
	
	if (number >= 0) //大于等于0时，从数组第一位读起
		i = 0;
	else i = 1; //小于0时，从第二位读起

	for (; num[i] != '\0'; i++) //依次对每位数进行处理
		sum += (num[i] - '0') * pow(10, n++); //计算逆序数的绝对值
	
	if (number < 0) //当number小于0时，取负值
		sum = -sum;

	return sum;
}