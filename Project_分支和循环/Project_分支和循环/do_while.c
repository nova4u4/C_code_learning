#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// do----while 先do 也就是循环至少执行一次
int main20()
{
    int i = 1;                
    do
    {
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);
    return 0;
}

int main21()     // do while的break    
{
    int i = 1;
    do
    {
        if (5 == i)
            break;
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}



int main23()
{
    int i = 1;

    do
    {
        if (5 == i)
            continue;        //此处continue 省略这次循环后面语句 回到if 死循环
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}