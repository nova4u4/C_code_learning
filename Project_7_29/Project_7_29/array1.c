#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main06()   
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };   //数组需要定义类型 C语言数组是相同类元素的集合 逗号隔开
    //arr[] 如果初始化可以不指定大小
    // 数组通过下标访问 下标从0开始
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}