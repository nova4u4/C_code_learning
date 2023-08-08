#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)  // 直接在同一个源文件定义 正常 
                       // 如果在不同源文件 也是extern声明（函数也具有外部链接属性）
	                   //  加static 同样将外部连接属性变为内部连接属性
{
	return x + y; //返回的是int 
}

int main09()
{
	int a = 10;
	int b = 20;
	int z = Add(a, b);  //
	printf("%d\n", z);

	return 0;
}