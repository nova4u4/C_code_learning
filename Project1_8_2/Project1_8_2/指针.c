#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1.内存   
// 
// 为了有效使用内存 将内存划分为小内存单元 每个单元一字节
// 每个内存单元都有一个地址（指针）

// 32位电脑 地址线32根 有电信号1或0 序列有2的32次方 作为内存编号
// 即有2的32次方个内存单元 一个单一1字节  4GB

int main02()
{
	int a = 10; //向内存申请4个字节 存储10 （以开始的地址为准）
	&a; //取地址
	// 进入调试 可以进入内存窗口 监视窗口
	//            0000 0000 0000 0000 0000 0000 0000 1010  10的32位2进制表示
	// 转为16进制  0    0    0    0    0     0   0     a     —— 0x 00 00 00 0a（0x表示16进制）
	//但是内存中 倒着存   0a 00 00 00

	printf("%p\n", &a);  //打印地址 二进制太长 以十六进制输出

	int* p = &a; // 取地址存放在变量中 那这个变量的类型就是指针变量 int*   p就是指针变量
	// *说明是指针变量 int说明指向的对象是int类型（此时p指向a a是int类）

	char ch = 'w';
	char* pc = &ch;

	*p=20 ; //解引用操作符*  通过p中存放地址 找到p中所指对象 即*p 就是p指向的对象a =10
	printf("%d\n", *p);

	// 指针变量也分全局和局部 
	return 0;
}