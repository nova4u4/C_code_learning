#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2.static修饰全局变量 也是存放在静态区域

extern int g_val;  //声明外部符号  若无static修饰 全局变量具有外部链接属性（link 汇编的一部分） 
// 编译 连接 生成可执行程序exe

int main08()
{
	printf("%d\n", g_val); //使用其他源文件的全局变量 需要extern声明

	return 0;
}

// 但若 前源文件定义 static int g_val 则报错 
//  因为 static修饰全局变量时 将外部链接性变成内部链接性
// 有防止误用的作用 如常用变量abc
