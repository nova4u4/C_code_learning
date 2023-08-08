#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main03()
{
	// 转义字符
	//  \n 换行   \0字符串结束标志    \? (曾经)防止多个问号时变为三字母词  如??(表[
	//  \' 单引号字符   \" 双引号字符  \\ 让后面的斜杠只是斜杠
	//  \t 水平制表符(一大块空格 按table)   \a 警告(触发蜂鸣器)    \r 回车  \b退格
	//  \ddd （d是1~3个八进制数字) 如\130 (8进制 转为10进制88)
	printf("%c\n",'\130');   //输出的是字符 是 130(八进制)转为88(10进制）对应的ascii码字符

	//  \xdd  d是16进制数字  如x60 转为10进制 对应ASCII码 96
	printf("%c\n", '\x60');

	// %d 打印整形   %c 打印字符  %s 打印字符串  %f 打印浮点数  %lf 打印double  %zu 打印sizeof

	printf("abc\n\0def");
	printf("abc\\0def\n");  // 让后一个斜杠是斜杠字符 0也是字符
	printf("c:\\test.c");   // 路径打印也要注意
	printf("\a");  // 警告(触发蜂鸣器)

	//   strlen("c:\test\628\test.c") 字符长度14 因为\t算一个 \62算一个 不是628是因为八进制没有8
	return 0;
}