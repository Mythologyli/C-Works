#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ��ʵ��һ���ַ������ҵļ򵥺�����

�����ӿڶ��壺
char *search( char *s, char *t );

����search���ַ���s�в����Ӵ�t�������Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��
*/

#include <stdio.h>
#define MAXS 30

char* search(char* s, char* t);
void ReadString(char s[]); /* �����ṩ��ϸ�ڲ��� */

int main()
{
    char s[MAXS], t[MAXS], * pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char* search(char* s, char* t)
{

}
