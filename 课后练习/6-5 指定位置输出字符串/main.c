#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求实现一个函数，对给定的一个字符串和两个字符，打印出给定字符串中从与第一个字符匹配的位置开始到与第二个字符匹配的位置之间的所有字符。

函数接口定义：
char *match( char *s, char ch1, char ch2 );

函数match应打印s中从ch1到ch2之间的所有字符，并且返回ch1的地址。
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