#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu()
{
	printf("***********************************\n");
	printf("********   1.play  0.exit   *******\n");
	printf("***********************************\n");
}


void game()
{
	// 1.初始化棋盘
	char Board[ROW][COL] = { 0 };
	char ret = '0';
		InitBoard(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		while (1)
		{
			PlayerMove(Board, ROW, COL);
			DisplayBoard(Board, ROW, COL);
			ret = IsWin(Board, ROW, COL);

			if (ret != 'C')
			{
				break;
			}

			ComputerMove(Board, ROW, COL);
			DisplayBoard(Board, ROW, COL);
			ret = IsWin(Board, ROW, COL);

			if (ret != 'C')
			{
				break;
			}
		}

		if (ret == '*')
		{
			printf("小猪胜利\n");
		}
		else if (ret == '#')
		{
			printf("电脑胜利\n");
		}
		else
		{
			printf("平局\n");
		}
}
	  


int main()
{
	srand((unsigned int)time(NULL));   //设置随机数生成起点
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
			break;
		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}


