#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




// int i;
int main31()        // 输出大于  int i 没有初始化 默认值为0；
//  sizeof输出是无符号整形  因此比较的左右边需要都是无符号整形
//   -1 的无符号整形很大
{
    int i=0;
    i--;
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}




// 2.计算求和
// 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，

// 例如：2 + 22 + 222 + 2222 + 22222

int main32()
{
    int a = 0;
    int n = 0;
    int i = 0;
    int sum = 0;
    int tmp = 0;


    scanf("%d%d", &a, &n);

    for (i = 0; i < n; i++)
    {
        tmp = tmp * 10 + a;
        sum = sum + tmp;

    }

    printf("%d\n", sum);
    return 0;
}



// 3.使用指针打印数组内容

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。 arr是一个整形一维数组。


int main()

{
    int arr[5] = { 2,3,4,5,6 };

    int* p = arr;

    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(p + i));
    }




    return 0;

}