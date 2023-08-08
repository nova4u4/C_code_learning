#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 猜数字游戏 电脑产生随机数(1~100)

void menu()
{
	printf("***************************\n");
	printf("********  1.play  *********\n");
	printf("********  0.exit  *********\n");
	printf("***************************\n");
}
 // 要求每次打开游戏随机数不一样 但是在游戏中保持一样
void game()
{
	// 1.生成随机数
	// rand函数 范围 0~RAND_MAX RANDMAX转到定义 32767(0x7fff)   头文件stdlib.h
	// srand设置rand函数

    // srand中的数可以决定随机数 输入一个变化的量 如时间 要求是unsigned int
    // 时间戳 现在时间和计算机起始时间差 一直在变化

	// time函数 返回时间戳 头文件time.h  可以传空指针 NULL
	// int *a =NULL(本质是0) 不需要这个参数 
	int ret = rand()%100+1;   // 任何正整数 mod 100 只会取0~99(余数)  0~99+1-----1~100；
	//printf("%d\n", ret);


	// 2.猜数字
	int guess = 0;
	while (1)  //一直循环
	{
		printf("猜数字:>");
		scanf("%d", &guess);

		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int maina01()
{
	srand((unsigned int)time(NULL)); //生成本次游戏需要的随机数
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;// (break的是switch)
		case 0:
			printf("%退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} 
	while (input);   //input非零则为真 继续循环 为0则跳出

	return 0;
}