#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求实现一个函数，将两个字符串连接起来。

函数接口定义：
char *str_cat( char *s, char *t );

函数str_cat应将字符串t复制到字符串s的末端，并且返回字符串s的首地址。
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