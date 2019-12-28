//由于题目中的ReadString由裁判实现，故此文件无法编译通过！！！

#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求编写函数，将输入字符串t中从第m个字符开始的全部字符复制到字符串s中。

函数接口定义：
void strmcpy( char *t, int m, char *s );

函数strmcpy将输入字符串char *t中从第m个字符开始的全部字符复制到字符串char *s中。若m超过输入字符串的长度，则结果字符串应为空串。
*/

#include <stdio.h>
#define MAXN 20

void strmcpy(char* t, int m, char* s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

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
    int t_len = strlen(t); //t的长度
    
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