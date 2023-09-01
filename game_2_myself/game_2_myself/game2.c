#define _CRT_SECURE_NO_WARNINGS

#include"game2.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	// 除了雷区 还需要打印坐标
	// 行坐标在循环中 每行前面多一个   列坐标直接在第一行先写
	int i = 1;
	int j = 1;
	int k = 0;
	printf("-------------------扫雷游戏------------------\n");
	for (k = 0; k <= col; k++)
	{
		printf("%d ", k);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------扫雷游戏------------------\n");
}



void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = MINENUM;
	// 1~9 使用随机数 % 9  ——0~8   +1等于 1~9

	while (count)
	{
		int x = rand() % row + 1;    // 1~9随机数
		int y = rand() % col + 1;    // 1~9随机数

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;      //使用count和while控制循环 也是一种思路
		}

	}

}


void menu1()
{
	printf("********************************\n");
	printf("*********   1.CHECK    *********\n");
	printf("*********   2.MARK     *********\n");
	printf("*********   3.UNMARK   *********\n");
	printf("********************************\n");

}


int get_mine_num(char mine[ROWS][COLS],int x,int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
{
	if (x<1 || x>ROW || y<1 || y>COL)       //当坐标非法时，停止递归，返回上一层函数
	{
		return;
	}
	if (show[x][y] != '*')       //当 show 数组在该坐标上的元素不为 '*' 时，
	                    	  // 表示该坐标已被排查过，则停止递归，返回上一层函数
	{
		return;
	}
	int count = get_mine_num(mine, x, y);      //调用函数计算坐标周围的8个坐标有几个地雷
	if (count > 0)               //当该坐标周围的地雷数量大于0时，不递归
	{
		(*win)++;                
		show[x][y] = count + '0';       //由于 show 数组为 char 类型，所以 count加上 '0'
		           //使该坐标周围的地雷个数变为字符 '地雷个数'，这样才能与 show 数组元素类型对应起来
		return;
	}
	else if (count == 0)       //当该坐标周围的地雷数量等于0时，递归函数，
		                       // 对周围的8个坐标依次调用 Unfold 函数
	{
		(*win)++;               //每当玩家输入的坐标不是地雷时，win++
		show[x][y] = '0';       //将不是地雷的坐标赋值为'0'，给玩家营造出该区域没有地雷的视觉效果
		Unfold(mine, show, x - 1, y, win);
		Unfold(mine, show, x - 1, y + 1, win);
		Unfold(mine, show, x, y + 1, win);
		Unfold(mine, show, x + 1, y + 1, win);
		Unfold(mine, show, x + 1, y, win);
		Unfold(mine, show, x + 1, y - 1,win);
		Unfold(mine, show, x, y - 1, win);
		Unfold(mine, show, x - 1, y - 1, win);
	}
}


void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	while (win<=row*col-MINENUM)
	{

		printf("%请输入排查坐标:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("%已排查，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾,你被炸死了\n");
					show[x][y] = 'G';
					DisplayBoard(mine, ROW, COL);
					DisplayBoard(show, ROW, COL);
					break;
				}
				else 
				{
					Unfold(mine, show, x, y, &win);
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
		if (win == row * col - MINENUM)
		{
			printf("恭喜你，排雷成功\n");
			break;
		}
	}




}