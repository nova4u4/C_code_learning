#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 计算机存储设备： 寄存器、高速缓存、内存、硬盘
//               从左往右 空间变大 速度变慢 造价变低 
int main10()
{
	// 可以自己创建寄存器变量 
	register int num = 3; // 建议3放在寄存器中 加快读写、访问速度
	//但是现在编译器智能 有时候会自动放入寄存器提升速度。
	return 0;
}