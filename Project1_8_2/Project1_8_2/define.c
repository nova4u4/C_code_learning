#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1. define定义标识符常量

#define NUM 100  //定义NUM为100  

// 2.define定义宏（宏是有参数的）

#define ADD(x,y) ((x)+(y))     // 宏名 参数(无类型 只是符号） 宏体（用于替换）

int main01()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);

	int a = 10;
	int b = 20;
	int c = ADD(a, b);  //宏替换 ADD——————((a)+(b)) 是替换 而函数是调用
	printf("%d\n", c);
	return 0;
}