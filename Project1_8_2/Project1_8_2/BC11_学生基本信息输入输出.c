#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main06() {
    int a = 0;
    float b, c, d = 0;
    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
    
    //���������� ���������ʱ����ָ��λ�� %.2f��ʾ��2λС�����


    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);

    return 0;
}