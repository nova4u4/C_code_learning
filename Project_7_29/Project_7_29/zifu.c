#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main02()
{
	// char 字符类型
	// 'a' 单引号 字符
	// char ch = 'w';

	// "abcde"  双引号 字符串字面值 string literal 是常量 
	// 字符串的结束标志是 \0 作为转义字符 不算长度 但占空间
	// 字符串c语言没有类型
	// 存储字符串 放在字符数组 

	char arr1[] = "abcdef"; // 加上\0 需要七个空间
	char arr2[] = { 'a','b','c','d','e','f' };  // 没有 \0 六个空间
	printf("%s\n", arr1);
	printf("%s\n", arr2);  // 乱码了 烫烫烫烫

	// 内存空间中 xxx arr1 xxx   打印arr1 以\0 结尾 不再继续打
	//  xxx xxx arr2 xxx    打印arr2 没有结尾

	char arr3[] = { 'a','b','c','d','e','f','\0'};  // 加\0可以实现停止
	printf("%s\n", arr3);

    int len = strlen("abc"); // 求字符串长度的函数(数到\0) 需要返回值 头文件string.h 
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));

	return 0;
}