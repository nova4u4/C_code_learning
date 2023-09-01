#define _CRT_SECURE_NO_WARNINGS
//
//
//
//
//// 概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//
//
#include <stdio.h>
//
//int main21()
//{
//    int* p;//局部变量指针未初始化，默认为随机值
//    *p = 20;
//    return 0;
//}
//
//
//int main22()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}
//
//
//
//int* test()
//{
//    int a = 10;   //这里的a是临时变量 出test函数就销毁了
//    return &a;     //虽然依然是这个地址 但是不一定能正常访问 (如不被覆盖0
//}
//
//int main23()
//{
//    int* p = test();
//
//    return 0;
//}
//
//
//
//
// // 如何避免野指针 
//
//int main24()
//{
//    int a = 10;
//    int b = 0;
//    int* p = &a;
//
//  //  int* p2 = NULL;   //  (本质上就是0)
//  //   *p2 = 100;      //err 如0地址不能访问 没有指向有效空间
//
//    // 因此一般用法如下
//
//    int* p3 = NULL;
//
//    if (p3 != NULL)
//    {
//        *p3 = 100;
//    }
//
//
//}
//
//
//
//// 一.指针加减整数
//
//#define N_VALUES 5
//int main25()
//{
//    float values[N_VALUES];
//    float* vp;   //没有解引用 野指针没关系
//
//    //指针+-整数；指针的关系运算
//    for (vp = &values[0]; vp < &values[N_VALUES];)
//    {
//        *vp++ = 0;   // *vp = 0   vp++
//    }
//
//}
//
//int main26()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//   /* for (i = 0; i < sz; i++)   //数组写法
//    {
//        arr[i] = 1;
//    }*/
//
//
//    int* p = arr;    //指针写法1
//    for (i = 0; i < sz; i++)
//    {
//        *p = 1;
//        p++;
//    }
//    
//    int* p = arr;   //指针写法2
//    for (i = 0; i < sz; i++)
//    {
//        *(p + i) = 1;
//    }
//}
//
//
//
//
//// 二. 指针-指针
//
//// 指针 - 指针 得到的绝对值是指针间元素个数 
//
//// 指向同一块空间的指针相减才有意义
//
//int main27()
//
//{
//    int arr[10] = { 0 };
//    printf("%d\n", &arr[9] - &arr[0]);
//    // 结果是 9  9个元素
//    return 0;
//}


int my_strlen(char *str)
{
    char* start = str;
    while (*str != '\0')
    {
        str++;
    }
    return (str - start);

}


int main28()
{
    int len = my_strlen("abcdef");
    printf("%d\n",len);

    return 0;
}

int main29()
{
#define N_VALUES 5
    float values[N_VALUES];
    float* vp;
    for (vp = &values[N_VALUES]; vp > &values[0];)
    {
        *--vp = 0;
    }
}

// 规定 允许指向数组元素的指针 和最后一个元素后的位置比 
// 不能和第一个元素之前的比




// 四. 二级指针

// 指针变量也是变量，是变量就有地址，存在二级指针变量中

int main210()
{
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;

    ** ppa = 20;
    printf("%d\n", a);
    return 0;
}



// 五. 指针数组
// 存放指针的数组



int main31312()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    int arr[10];

    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    int* parr[10] = { &a,&b,&c };   //指针数组
    

    int arr1[4] = { 1,2,3,4 };
    int arr2[4] = { 2,3,4,5 };
    int arr3[4] = { 3,4,5,6 };

    int* parr1[3] = { arr1,arr2,arr3 };  // 通过指针管理一维数组
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d ", parr1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}