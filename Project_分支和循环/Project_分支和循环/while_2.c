#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main05()
{
	//int ch = getchar();   //获取字符的ASCII码 放入int的ch
	////getchar读取正常 保存其对应ascii码  如果不正常 返回EOF
	////end of file  存其int值为-1  （右击转到定义）
	//// 所以用int接收好


	//printf("%c\n", ch);   //int类型 但是输出类型%c 即输出ASCII码对应字符
	//putchar(ch);   // 头文件就是stdio.h  和前一句一个意思
	int ch;
	while ((ch = getchar()) != EOF)   //如ctrl+z跳出
	{
		putchar(ch);// 自动换行 ——输入字符+回车 如a+回车
		//getchar是从输入缓冲区读取 没有则等待
		// a+回车 输入缓冲区 a \n   先读a 再读\n
		// 依次读取 因此输入字符串也是一个一个读

		//适当修改这个代码可以清除缓冲区
	}
	return 0;
}