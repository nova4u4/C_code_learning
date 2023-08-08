#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main01()
{
	// 1.字面常量
	
	// 30; 整数
    // 3.14;  浮点数
	// 'w'   单引号字符
	// "abc"  双引号字符串


	// 2.const 修饰的常变量

	// int a = 10   常变量可修改
	// a = 20;
	// const int b = 10; （不让改)  本质是变量 但是不让改 有常量的属性
	// int arr[n]={0} 此处n必须是常量 变量会报错 不能const int

	// 3.define定义的标识符常量
	
    #define STR "abcdef" 
	printf("%s\n", STR); //打印字符串 %s
    #define max 100
	printf("%d\n", max);
	int a = max;
    printf("%d\n", a);

	// 4. 枚举常量 不申请空间

	enum Color  
	{
		RED,  //习惯写大写 三个可能取值为枚举常量
		GREEN,
		BLUE,
	};

	enum Color c = RED;  //创建颜色变量 c 类型是color 需要向内存申请空间

	return 0;
}