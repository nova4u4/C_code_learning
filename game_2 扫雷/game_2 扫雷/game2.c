#define _CRT_SECURE_NO_WARNINGS
#include"game2.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows; j++)
		{
			board[i][j] = set;
		}
	}
}





void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	// 1~9 使用随机数 % 9  ——0~8   +1等于 1~9

	while (count)
	{
		int x = rand() % row + 1;    //1~9随机数
		int y = rand() % col + 1;      // 1~9随机数

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;      //使用count和while控制循环 也是一种思路
		}

	}

}





void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("-------------------扫雷游戏----------------------\n");
	
	int k = 0;
	for (k = 0; k <= col; k++)     //坐标打印 列坐标就单独先打印一列
	{
		printf("%d ",k);
	}
	printf("\n");



	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);       //坐标打印 行坐标就在每行前面加一个打印即可
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------扫雷游戏----------------------\n");

}



int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	int count1 = 0;
	int i = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count1 = count1 + 1;
			}
		}
	}
	return count1;
}



void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;

	while(win<row*col - EASY_COUNT)   // 用总数减雷数——判断次数控制while
	{
		printf("请输入需要排查的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能排查\n");
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //如果不是雷 统计show 
			{
				win++;
				count=get_mine_count(mine,x,y);

				show[x][y] = count + '0';
				// 数字转数字字符  原值+'0'得ASCII码
				DisplayBoard(show, ROW, COL);
				
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			DisplayBoard(show, ROW, COL);
		}
	}
}