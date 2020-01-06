//ReadString����ȱʧ���޷�����

#define _CRT_SECURE_NO_WARNINGS
/*��ֹʹ��scanf()�Ⱥ���ʱ����*/

/*
����Ҫ��ʵ��һ���ַ������ҵļ򵥺�����

�����ӿڶ��壺
char *search( char *s, char *t );

����search���ַ���s�в����Ӵ�t�������Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
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
    int s_len = strlen(s);
    int t_len = strlen(t);
    int i, j;
    bool is_same = false;
    
    for (i = 0; i < s_len; i++)
    {
        if (s[i] == t[0])
        {
            for (j = 1; j < t_len; j++)
            {
                is_same = true;
            
                if ((i + j == s_len && j < t_len) || s[i + j] != t[j])
                {
                    is_same = false;
                    break;
                }
            }
        }

        if (is_same == true)
            break;
    }

    if (is_same == true)
        return &s[i];
    
    return NULL;
}
