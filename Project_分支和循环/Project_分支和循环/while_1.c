#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04()
{
	int i = 1;
	while (i <= 10)
	{
		//if (5 == i)
		//	break;   // break直接结束循环 跳到大括号外 打印1234
		//    //continue    // continue 结束本次循环 直接返回while处 此时为死循环
		//printf("%d ", i);
		//i++;
		i++;
		if (5 == i)
			continue; //continue要分号 打印2-11

			printf("%d ", i);
	}
	return 0;
}