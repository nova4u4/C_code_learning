#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main06()   
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };   //������Ҫ�������� C������������ͬ��Ԫ�صļ��� ���Ÿ���
    //arr[] �����ʼ�����Բ�ָ����С
    // ����ͨ���±���� �±��0��ʼ
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}