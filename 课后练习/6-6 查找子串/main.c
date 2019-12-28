#define _CRT_SECURE_NO_WARNINGS
/*防止使用scanf()等函数时报错*/

/*
本题要求实现一个字符串查找的简单函数。

函数接口定义：
char *search( char *s, char *t );

函数search在字符串s中查找子串t，返回子串t在s中的首地址。若未找到，则返回NULL。
*/

#include <stdio.h>
#define MAXS 30

char* search(char* s, char* t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

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
