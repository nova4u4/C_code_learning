#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main03()
{
	//指针变量的大小

	// 不管是什么类型的指针 都是创建指针变量 是用于存放地址的 
	// 取决于地址存放需要的空间  32位机器 32bit位 --4字节    64位及其 64bit位——8字节
	// debug 可以选择 x64 x86
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
		printf("%zu\n", sizeof(float*));
		printf("%zu\n", sizeof(double*));

		int* p1, * p2, p3;   // p1 p2是指针变量 p3就只是int
	return 0;
}