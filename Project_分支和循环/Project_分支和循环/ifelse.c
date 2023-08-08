#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main01()
{
	////  代码1
	//  if (condition) {
	//  	return x;
	//  }
	//  return y;            其实具有选择意义 因为return是必须的 但是这样的代码容易引起混乱 尽量加else

	//int num = 1;
	//if (num == 5)
	//{
	//	printf("hehe\n");
	//}
	//
	int num = 1;  // 单个判断语句 将常量写在前 防止出错 如漏掉一个等号
	if (5 == num)
	{
		printf("hehe\n");
		printf("hehe\n"); // 超过两个语句使用代码块
	}

	return 0;
}