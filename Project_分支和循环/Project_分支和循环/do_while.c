#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// do----while ��do Ҳ����ѭ������ִ��һ��
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

int main21()     // do while��break    
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
            continue;        //�˴�continue ʡ�����ѭ��������� �ص�if ��ѭ��
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}