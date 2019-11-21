#define _CRT_SECURE_NO_WARNINGS

/*
模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。

输入格式:
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。

输出格式:
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。

输入样例:
1+2*10-10/2=

输出样例:
10
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num, next_num; //操作数和下一个操作数
	char op; //运算符
	bool complete = false; //是否可以结束

	scanf("%d", &num); //先将第一个操作数读入

	while (complete == false) //在不可以结束的情况下持续运算
	{
		scanf("%c", &op); //读入下一个操作符和操作数

		if (op == '=') //操作符为=时，输出结果，并且可以结束
		{
			printf("%d", num);
			break; //可以结束
		}

		scanf("%d", &next_num); //读入下一个操作数

		switch (op)
		{
		case '+': num += next_num; break;
		case '-': num -= next_num; break;
		case '*': num *= next_num; break;
		case '/': //若下一个操作数不为0， 计算并跳出；若为0，直接滑入default
			if (next_num != 0)
			{
				num /= next_num;
				break;
			}
		default: //default为错误情况
			printf("ERROR");
			complete = true; //可以结束
		}
	}

	return 0;
}