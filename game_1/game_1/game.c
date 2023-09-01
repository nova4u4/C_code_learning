// game.c 游戏代码实现的函数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>     //都要stdio和game 其实可以把stdio在game.h中声明 声明的嵌套
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)   //版本1 列数不会变
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//
//}
//

void DisplayBoard(char board[ROW][COL], int row, int col)   
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int k = 0;
			for (k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}





void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>\n");
	
	int x = 0;
	int y = 0;
	

	while (1)  //合法性检测
	{
		printf("请输入坐标\n");  // 玩家的坐标应该是1-3
		scanf("%d %d", &x, &y);   //放在循环里 否则下面不break会循环提示
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，不能下棋，请选择其他位置\n");
			}
		}
		else
		{
			printf("非法输入，请重新输入\n");
		}
	}
}




void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");

	int x = 0;
	int y = 0;

	while (1)           //可以用while(1) 然后语句中if break 来跳出循环 易思考
	{
		x = rand() % row; //对3取模 可以得到0/1/2   因此要+1
		y = rand() % col; // srand在主函数中定义

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}



}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;   // 
		}
	}
	return 1;    //如果满了 返回1
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//先判断行 
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1]; // 如果相等 是谁就返回谁赢 因此选用* 和 #
		}
	}

	//再判断列
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[1][j]; // 如果相等 是谁就返回谁赢 因此选用* 和 #
		}
	}

	//最后判断对角线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (IsFull(board, row, col) == 1)
	{
		return 'Q';  //Q是平局
	}

	return 'C';  //如果没有胜平负 返回继续
}