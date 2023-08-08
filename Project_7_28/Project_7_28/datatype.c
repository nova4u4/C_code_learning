// 数据类型 基本分三类 
// 浮点型 整形 字符型  可以再细分

#include<stdio.h>

int main02()
{
    // printf("%d\n",100) // 打印整形 整形数据为100

	printf("%zu\n", sizeof(char)); //字符  1字节    
	// sizeof(char) 返回char类型数据在内存中占空间大小
	printf("%zu\n", sizeof(short));   //短整型  2字节  
	// 若 %d报错  %zu是打印一个sizeof返回的无符号整形
	printf("%zu\n", sizeof(int));    //整形  4字节
	printf("%zu\n", sizeof(long));   // 长整型   4字节
	// c语言规定 sizeof(int) <= sizeof(long)
	printf("%zu\n", sizeof(long long));  //长长整形 8字节
	printf("%zu\n", sizeof(float));  //单精度浮点数 4字节
	printf("%zu\n", sizeof(double)); //双精度浮点数  8字节

	//计算机中单位
	// 比特bit为最小单位 0/1 
	// byte 字节 一个字节为8位2进制   1byte=8bit     kb mb tb pb (差1024倍 2的10次方)
	// 一个字俩字节 

	int age = 20;
	double price = 66.6;  //类型 通过创建变量 向内存申请空间和地址 存放数据
	return 0;
}