#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main40()
{
    float d = 0.0f; //����f 0.0�Զ�ʶ��Ϊdouble��
    int year = 0;
    int month = 0;
    int day = 0;

    scanf("%4d%2d%2d", &year, &month, &day); //scanf  %m���Կ������ ���ڽ�ȡ  

    printf("year=%d\n", year);  
    printf("month=%02d\n", month);  //printf %0��ʾ���� %0Xd��ʾ����Xλ
    printf("date=%02d", day);

    return 0;
}