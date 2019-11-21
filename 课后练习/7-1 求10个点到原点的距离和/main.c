#define _CRT_SECURE_NO_WARNINGS
/*
求10个点到原点的距离和。输入10个点的坐标，计算并输出这些点到原点的距离和。定义函数dist(x, y)，计算平面上任意一点(x, y)到原点(0, 0)的距离，函数返回值类型是double。

输入格式:
输入在一行中给出10对实数，每对实数对应一个点的横坐标和纵坐标。

输出格式:
在一行中按照“distance = S”的格式输出部分和的值S，精确到小数点后六位，请注意等号的左右各有一个空格。题目保证计算结果不超过双精度范围。

输入样例:
0 0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9

输出样例:
distance = 63.639610
*/

#include <stdio.h>
#include <math.h>

double dist(double x, double y);

int main(void)
{
	double x, y, sum = 0.0; //xy为坐标

	for (int i = 1; i <= 10; i++) //进行10次读取和叠加
	{
		scanf("%lf %lf", &x, &y); //读取
		sum += dist(x, y); //叠加
	}

	printf("distance = %lf", sum);

	return 0;
}

double dist(double x, double y) //返回到原点(0, 0)的距离
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
