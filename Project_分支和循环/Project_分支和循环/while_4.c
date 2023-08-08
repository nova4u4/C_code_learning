#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main07()
{
    // 初始化 ch
    // 只打印数字字符 continue跳过其他字符
    char ch = '\0';
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
            continue;
        putchar(ch);
    }
    return 0;
}