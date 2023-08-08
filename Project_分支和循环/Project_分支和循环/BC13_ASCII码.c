#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main31() {
    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };

    int length = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr)计算数组的字节大小   sizeof(arr[0])计算数组元素大小
    // 因此可以求出 元素个数
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}