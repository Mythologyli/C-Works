#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
��˵���г���Աѧϰ�ĵ�һ������������Ļ�����һ�䡰Hello World����������������к�����Ϊ�������еĳ���Ա����д�ĳ���ø߼�һ�㣬Ҫ�ܸ�����ָ����������к���

�����ʽ��
�����ڵ�һ�и���һ�����������S����һ���ɲ�����7��Ӣ����ĸ��ɵĵ��ʣ��Իس�������

�����ʽ��
��һ�������Hello S���������S�������к���

����������
Mars

���������
Hello Mars
*/

#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>

int main(void)
{
	char str[8];

	gets(str);

	printf("Hello %s", str);

	return 0;
}