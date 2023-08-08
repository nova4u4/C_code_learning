#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main02()
{
	//情况较多 if else较复杂 则用switch case
	// 但是有范围的 switch不好用

	// switch(整形表达式)
    // { 语句项 }    case 1: 需要冒号   if()不加分号
	// 
	// case后只能跟（整形且常量）表达式 字符可以 因为字符存其ascii马 也是整形
	// case只是决定入口！！  需要break调出  
	// 否则 case3进去 继续运行case5 6 7
	int n = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");   //case 可以不break 用于多情况同一语句情况 简化代码
		break; 
	case 6:
	case 7:
		printf("weekend\n");
		break;       // 编程好习惯 最后也加上break 便于续写

	default:
		printf("选择错误"); // 没有case匹配的 全部进入default 放一个是好习惯
	}
	return 0;
}