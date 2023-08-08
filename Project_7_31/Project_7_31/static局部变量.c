#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// static 静态 三个用法
// 1.修饰局部变量
// static 修饰局部变量时 出作用域后不销毁 本质上改变了存储位置 static修饰变量放在静态区 程序结束才销毁
// 第一次编译期间就给静态变量分配了存储范围 指派了地址
void test()  //void 则不需要返回值
{
	static int a = 1;  //若只为int a 则为局部变量 出作用范围后生命周期结束 a销毁 
	            // 此时局部变量a存在栈中 栈区数据 进入作用域创建 出则销毁
	            // 直到下一次i++后 重新进入test a又重新赋值为1  因此打印10个2
	a++;
	printf("%d ", a);  // 若为static int a 则打印结果为2 3 4 5 6 7 8 9 10 11
	                // 
}
int g_val;
// 调试时 可以转到反汇编查看汇编语言 MOV PUSH等等  但static int a没有对应汇编代码 不参与执行
int main07()
{
	int i = 0;
	while (i < 10)   // 循环十次
	{
		test(); //f10单步调试 到这里时 若想进入test函数 按f11；
		i++;  
	}
	return;
}