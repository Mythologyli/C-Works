#define _CRT_SECURE_NO_WARNINGS
/*
��10���㵽ԭ��ľ���͡�����10��������꣬���㲢�����Щ�㵽ԭ��ľ���͡����庯��dist(x, y)������ƽ��������һ��(x, y)��ԭ��(0, 0)�ľ��룬��������ֵ������double��

�����ʽ:
������һ���и���10��ʵ����ÿ��ʵ����Ӧһ����ĺ�����������ꡣ

�����ʽ:
��һ���а��ա�distance = S���ĸ�ʽ������ֺ͵�ֵS����ȷ��С�������λ����ע��Ⱥŵ����Ҹ���һ���ո���Ŀ��֤������������˫���ȷ�Χ��

��������:
0 0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9

�������:
distance = 63.639610
*/

#include <stdio.h>
#include <math.h>

double dist(double x, double y);

int main(void)
{
	double x, y, sum = 0.0; //xyΪ����

	for (int i = 1; i <= 10; i++) //����10�ζ�ȡ�͵���
	{
		scanf("%lf %lf", &x, &y); //��ȡ
		sum += dist(x, y); //����
	}

	printf("distance = %lf", sum);

	return 0;
}

double dist(double x, double y) //���ص�ԭ��(0, 0)�ľ���
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
