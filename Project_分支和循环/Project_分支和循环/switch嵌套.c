#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main03()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++; //û��break
    case 2:
        n++;
    case 3:
        switch (n)
        {//switch����Ƕ��ʹ��
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break; //���break��Ƕ�׵�break case4����ִ��
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