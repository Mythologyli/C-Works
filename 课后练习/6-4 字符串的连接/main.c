#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ��ʵ��һ���������������ַ�������������

�����ӿڶ��壺
char *str_cat( char *s, char *t );

����str_catӦ���ַ���t���Ƶ��ַ���s��ĩ�ˣ����ҷ����ַ���s���׵�ַ��
*/

#include <stdio.h>
#include <string.h>

#define MAXS 10

char* str_cat(char* s, char* t);

int main()
{
    char* p;
    char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

char* str_cat(char* s, char* t)
{
    int t_len = strlen(t);

    char* i = s;
    int j;
    for (i = s + strlen(s), j = 0; j < t_len; i++, j++)
        *i = t[j];
    *i = '\0';

    return s;
}