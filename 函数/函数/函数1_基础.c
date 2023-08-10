#define _CRT_SECURE_NO_WARNINGS


// C语言函数分类   

// 1.库函数   IO函数 字符串相关函数 字符操作函数 内存操作函数 时间日期函数等等
// https://cplusplus.com/reference/可以查询

/* strcpy example */
#include <stdio.h>
#include <string.h>

int main01()
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);  //后赋给前
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}


/* memset example */ //内存设定

//  void* memset(void* ptr, int value, size_t num);
//  ptr 指向要填充的内存块的指针。
//  value 待设定值 作为int传递 但是使用该值的unsigned char转换来填充内存块。
//  num为 要设置为value 的字节数。
//  将ptr指向的内存块的 前num个字节设置为指定值（解释为unsigned char）。
int main02()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);   //前六个设置成 -  数组名就是地址 那就是指针
	puts(str);
	return 0;
}



//2.自定义函数
// 
//  组成：  返回类型 函数名 参数   函数体
// 
int get_max(int x, int y)
{
	return(x > y ? x : y); //三目运算符 表达式1 真——2 假——3
}

int main03()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = get_max(a, b);
	printf("%d\n", m);
	return 0;
}


// 虚拟机 虚拟的一台电脑 wmare workstation 
// 虚拟机是 .vmdk的文件 