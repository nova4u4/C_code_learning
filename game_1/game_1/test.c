#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 游戏代码的测试
menu()
{
	printf("*********************************\n");
	printf("********   1.play  0.exit   *****\n");
	printf("*********************************\n");
}

#include "game.h"

void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };  //希望每个元素都是空格

	//初始化棋盘
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);          // 打印出来看看

	// 下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')  //C表示继续
		{
			break;
	    }
		
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 判断输赢
		DisplayBoard(board, ROW, COL);
       
	}
	if (ret == '*')
	{
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
    
}

int main()
{

	srand((unsigned int)time(NULL)); //设置随机数的生成起点


	int input = 0;
	do          //上来就有菜单 因此用do while循环
	{
		menu(); //打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			// printf("三子棋\n");        //先用printf测试主函数逻辑
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default: 
			printf("选择错误\n");
			break;
		}
	} while (input);



	return 0;
}