#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//  调试的基本步骤
//  1.发现错误
//  2.以隔离、消除的方式对错误进行定位
//  3.确定错误产生的原因
//  4.提出解决方法

// release 和 debug 两种     调试版本和发行版本
// debug有调试信息 release没有 且优化了 内存小



int main01()
{
    int a = 0;
    printf("%d", a);

    // f9 创建断点 配合f5 可以跳过无用循环 
    // f10逐过程  f11可以进入函数

    return 0;
}



// 监视时 arr,10 可以看arr的10个元素
// 看内存时 可以调节内存的显示范围 列数   存的二进制 显示的时候十六进制

//查看调用堆栈(谁调用了谁)


//  局部变量存在栈区中 
//  栈区习惯先使用高地址 再使用低地址
//  而数组随着下标增长 地址从低到高
// 因此越界访问时 可能反而会改变原先定义的量 


void test2()
{
    printf("kkk\n");
}

void test1()
{
    test2();
}

void test()
{
    test1();
}



int main24()
{
    test();
    return 0;
}


int main232()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("%d\n", c);
    return 0;
}


#include<assert.h>

// 还可以将void改为char* 
// 返回目标空间的地址 
// 便于链式访问  printf("%s",my_strcpy());
void my_strcpy(char* dest,const char *src) //const 防止源字符串被改变
{
    char* ret = dest;
    assert(src != NULL);   // 断言 断言失败会报错 很好定位
    assert(dest != NULL);
    while (*dest++ = *src++)   //简便
    {
        ;
    }
    return ret;
}

int main23112()
{
    char arr1[20] = "XXXXXXXXXXXX";
    char arr2[]   = "hello bit";
    // strcpy (目的地 源) 会把源字符串的\0一起拷贝过去
    // 假如误传空指针 解引用会出错
    char* p = NULL;
    my_strcpy(arr1, arr2);
    printf("%s", arr1);
    
     return 0;
}



int maindsa1()
{
    const int num = 10;
    // num =20;  const修饰的常量不能直接修改

   // int* p = &num;
   // *p = 20;      // 换个法子修改 翻窗


    //1.const放在星号左边
    
    // int const*p 
    const int* p = &num;  // 再用const把指针也锁上

    // p = &n  p指向的对象不能通过p来改变了 但p变量本身的值可以变
    // 也就是动不了num了


    //2.const放在*右边

    //int * const p : 可以通过p改变p指向的对象 没有锁上num
    // 但是p变量的值不能改变 只能指向num

    printf("%d\n", num);
    return 0;

}





#include<assert.h>
int my_strlen(const char* str)  //防止str被改变
{
    int count = 0;
    assert(str);
    while (*str != '\0')   //防止解引用空指针
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "hello bit";
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}