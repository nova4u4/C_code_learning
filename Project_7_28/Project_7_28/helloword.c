// 先创建项目 再有头文件、源文件
// C语言函数一定要有main 函数 且有且只有一个
// 后缀.c源文件 .h头文件
//  ctrl+f5 编译运行(不调试)
//  ctrl k c 注释    ctrl k u 取消注释

#include<stdio.h>     // stdio 为标准输入输出头文件 stand input output
 
int main01()   // voin main是古老写法不推荐   ( )是参数   
             // int main(void) 表示不需要参数  
	// main函数是程序的入口
{
	printf("hello world\n");   //printf是库函数 用于打印数据 字符串""传给printf  stdio.h中存的
	return 0;  // 一般规定 返回0是程序正常运行
}
 