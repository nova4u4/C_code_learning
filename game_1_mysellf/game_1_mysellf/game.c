#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{

			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		
		if (i < row - 1)
		{
			int k = 0;
			for (k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}



void PlayerMove(char Board[ROW][COL], int row, int col)
{
	printf("小猪下棋\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入坐标\n");   //玩家理解坐标应该是1—3  而数组行列是 0—2
		scanf("%d %d", &x, &y);
		if (x <= ROW  && x >= 1 && y <= COL  && y >= 1)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已有棋子，输入无效\n");
			}
		}
		else
		{
			printf("%输入错误\n");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col) 
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % ROW;    //取模 范围0~2
		y = rand() % COL;

		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}



int IsFull(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char Board[ROW][COL], int row, int col)
{
	//1.判断行
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ')
		{
			return Board[i][0];
		}
	}

	//2.判断列
	for (j = 0; j < col; j++)
	{
		if (Board[0][j] == Board[1][j] && Board[0][j] == Board[2][j] && Board[0][j] != ' ')
		{
			return Board[0][j];
		}
	}

	//3.判断对角线
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ')
	{
		return Board[0][0];
	}

	if (Board[0][2] == Board[1][1] && Board[2][0] == Board[1][1] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}

	// 平局
	int ret = IsFull(Board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';
}