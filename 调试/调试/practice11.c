#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1.大小端字节序

// 数据在内存中存放时 具有顺序问题

// 0x 00 00 00 01    存为 01 00 00 00   低->高

int main11()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;  // 强制类型转换 一次访问两个字节
	int i = 0;
	for (i = 0; i < 4; i++) //改0
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++) //打印
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




int main12()   // 任何一个变量/表达式 都有两个属性 类型属性和值属性
{
	int a = 0x11223344;   // 大小端 44 33 22 11
	char* pc = (char*)&a;   // 一次只改一个字节
	*pc = 0;
	printf("%x\n", a);   // 0x 11 22 33 00;
	return 0;
}