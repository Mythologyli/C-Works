#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ��ʵ��һ���������Ը�����һ���ַ����������ַ�����ӡ�������ַ����д����һ���ַ�ƥ���λ�ÿ�ʼ����ڶ����ַ�ƥ���λ��֮��������ַ���

�����ӿڶ��壺
char *match( char *s, char ch1, char ch2 );

����matchӦ��ӡs�д�ch1��ch2֮��������ַ������ҷ���ch1�ĵ�ַ��
*/

#include <stdio.h>

#define MAXS 10

char* match(char* s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, * p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

#include <string.h>

char* match(char* s, char ch1, char ch2)
{
    char* c1 = strchr(s, ch1);
    char* c2 = strchr(s, ch2);
    char* i;

    if (c1 != NULL)
    {
        if (c2 == NULL)
            c2 = s + strlen(s) - 1;

        for (i = c1; i <= c2; i++)
            putchar(*i);

        putchar('\n');
        return c1;
    }

    putchar('\n');
    return s + strlen(s);
}