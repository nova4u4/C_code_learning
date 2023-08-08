#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main03()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++; //没有break
    case 2:
        n++;
    case 3:
        switch (n)
        {//switch允许嵌套使用
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break; //这个break是嵌套的break case4继续执行
        }
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}