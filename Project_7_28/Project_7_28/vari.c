#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>    


// 变量的作用域
// 
// 1.局部变量            //生命周期是：进入作用域到出作用域
// 局部变量的作用域是变量所在的局部范围

// 2. 全局变量        //整个程序
// 全局变量的作用域是整个工程(项目)
//但是来自另一个源文件的 需要声明   extern int a
extern int a;


void test()
{
	printf("test-->%d\n", a);
}

int main()
{
	test();
	{
		//int a = 10;        //这个a的局部范围是此{ } 
		printf("a=%d\n", a);
	}
	
	printf("a=%d\n", a);

	return 0;
}