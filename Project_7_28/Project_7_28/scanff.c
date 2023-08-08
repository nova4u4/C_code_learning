#define _CRT_SECURE_NO_WARNINGS   //scanf需要 第一行加入
#include<stdio.h>    

// { }内定义的变量为局部变量
// { }外定义的变量为全局变量

int a = 100;  // 全局变量和局部变量名称可以相同 执行时优先选定局部 但不建议相同

int main03()   
{
	int a = 10;   
	// int a = 100; { }内不能重复定义
	int num1 = 0; //尽量初始化
	int num2 = 0;

	// 输入两个整数 使用scanf输入 
	scanf("%d,%d", &num1, &num2);  //需要取地址 才能放入变量 前面指定形式 按照整形读取；
	                                // a 逗号 b 因为里面是，  里面是空格则是空格
	int sum = num1 + num2;
	printf("%d", sum);


	return 0; 
}
