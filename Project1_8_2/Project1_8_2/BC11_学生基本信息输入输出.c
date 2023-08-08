#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main06() {
    int a = 0;
    float b, c, d = 0;
    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
    
    //浮点数输入 浮点数输出时可以指定位数 %.2f表示以2位小数输出


    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);

    return 0;
}