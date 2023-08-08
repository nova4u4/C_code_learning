#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04()
{
	int  input = 0;
	printf("好好学习吗(1/0)?");
	scanf("%d", &input); // 取地址存入input
	if (input == 1)  // if () {}
	{
		printf("好工作\n");
	}
	else
	{
		printf("卖红薯\n");
	}

	return 0;
}