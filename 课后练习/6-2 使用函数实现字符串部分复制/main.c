//������Ŀ�е�ReadString�ɲ���ʵ�֣��ʴ��ļ��޷�����ͨ��������

#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ���д�������������ַ���t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���s�С�

�����ӿڶ��壺
void strmcpy( char *t, int m, char *s );

����strmcpy�������ַ���char *t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���char *s�С���m���������ַ����ĳ��ȣ������ַ���ӦΪ�մ���
*/

#include <stdio.h>
#define MAXN 20

void strmcpy(char* t, int m, char* s);
void ReadString(char s[]); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

void strmcpy(char* t, int m, char* s)
{
    int t_len = strlen(t); //t�ĳ���
    
    if (m > t_len)
        s[0] = '\0';
    else
    {
        int i, j;
        for (i = 0, j = m - 1; j < t_len; i++, j++)
            s[i] = t[j];
        s[i] = '\0';
    }
}