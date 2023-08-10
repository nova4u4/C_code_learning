#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// 1.函数可以嵌套调用 不能嵌套定义

// 2.链式访问
#include<string.h>
int main41()
{
	int len = strlen("abcdef");
	printf("%d\n", len);

	// printf("%d\n", strlen("abcdef"));  链式结构

	printf("%d", printf("%d", printf("%d", 43)));   // printf返回值为打印字符数
	return 0;

}

// 3. main函数有三个参数 main( int argc,  char* argv[],char *envp[]) 



// 4.函数的声明和定义

//int Add(int x, int y);  //函数声明 告诉主函数有这个函数 去查找
//
//int main44()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//
//int Add(int x, int y)  //函数定义 若在主函数之后 会查找不到 则需要声明
//{
//	return x + y;
//}


// 但是函数的声明一般放在头文件中 
// 创建Add.h      Add.c  为一个加法模块  这样便于业务划分 或售卖

// 右键sln 属性 将exe改为lib静态库 add.lib (不给出源代码)

#include"add.h"  // 头文件相对于将声明拷贝过来 起声明作用

// 静态库实验中生成 lib 放到文件夹中
// 相当于函数项目 购买了 静态库试验0.lib   add.h

#pragma comment(lib,"静态库试验.lib")   //导入静态库
int maina51()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}