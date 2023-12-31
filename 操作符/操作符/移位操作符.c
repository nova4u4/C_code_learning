#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1_1()
{
	/*   << 左移操作符
	     >> 右移操作符
         注：移位操作符的操作数只能是整数。*/

 //     整数的二进制表示 ： 原码 反码 补码
//      正整数的原码 反码 补码相同
   //   负数的反码=原码除符号位取反  补码=反码+1  （符号位1表示负 位于首位) 
   //   vs中存数据使用二进制补码

	// 1.左移操作符    较为简单 左移 左边补0 右边舍弃
	// 计算结果是原结果两倍(无论正负) 易理解
	int a = 7;
	int b = a << 1;
	printf("a=%d\n", a);
	printf("b=%d\n", b);

	
	// 2.右移操作符 分为 逻辑运算 和算数运算
	// 逻辑运算就右移 左边补0 右边舍弃
	// 算数运算 右移 左边按符号位补 右边舍弃( 一般采用 )
	int c = -7;
	int d = c >> 1;
	printf("c=%d\n", c);
	printf("d=%d\n", d);

	return 0;
}