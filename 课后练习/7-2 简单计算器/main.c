#define _CRT_SECURE_NO_WARNINGS

/*
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ:
������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ:
��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

��������:
1+2*10-10/2=

�������:
10
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num, next_num; //����������һ��������
	char op; //�����
	bool complete = false; //�Ƿ���Խ���

	scanf("%d", &num); //�Ƚ���һ������������

	while (complete == false) //�ڲ����Խ���������³�������
	{
		scanf("%c", &op); //������һ���������Ͳ�����

		if (op == '=') //������Ϊ=ʱ�������������ҿ��Խ���
		{
			printf("%d", num);
			break; //���Խ���
		}

		scanf("%d", &next_num); //������һ��������

		switch (op)
		{
		case '+': num += next_num; break;
		case '-': num -= next_num; break;
		case '*': num *= next_num; break;
		case '/': //����һ����������Ϊ0�� ���㲢��������Ϊ0��ֱ�ӻ���default
			if (next_num != 0)
			{
				num /= next_num;
				break;
			}
		default: //defaultΪ�������
			printf("ERROR");
			complete = true; //���Խ���
		}
	}

	return 0;
}