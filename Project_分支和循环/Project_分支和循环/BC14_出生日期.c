#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main40()
{
    float d = 0.0f; //不加f 0.0自动识别为double型
    int year = 0;
    int month = 0;
    int day = 0;

    scanf("%4d%2d%2d", &year, &month, &day); //scanf  %m可以控制域宽 用于截取  

    printf("year=%d\n", year);  
    printf("month=%02d\n", month);  //printf %0表示补齐 %0Xd表示补齐X位
    printf("date=%02d", day);

    return 0;
}