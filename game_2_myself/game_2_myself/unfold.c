#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game2.h"
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define MINENUM 10


// 递归思路
// 1.自己不是雷(进入这个函数) 2.周围没有雷(get_num=0) 3.在边界范围内  4.没有排除过(结束条件 否则重复)

// 重点递归是 若符合展开 则继续搜索
//int get_mine_num(char mine[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			if (mine[i][j] == '1')
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//
//void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
//{
//	
//	if (x<1 || x>ROW || y<1 || y>COL)  //1.如果超出边界 结束递归 返回上层
//	{
//		return;
//	}
//	
//	if (show[x][y] != '*')       //如果排查过 结束递归 返回上层
//	{
//		return;
//	}
//
//	int count = get_mine_num(mine, x, y);
//
//	if (count != 0)
//	{
//		*win = *win + 1;
//		show[x][y] = '0' + count;
//		return;          // 如果周围有雷 填入show 结束递归 返回上层
//	}
//	else if (count == 0)
//	{
//		show[x][y] = '0';      //递归 排查其他点 是则展开
//		*win = *win + 1;
//
//		Unfold(mine, show, x - 1, y - 1,&win);
//		Unfold(mine, show, x - 1,y,&win);
//		Unfold(mine, show, x - 1, y + 1, &win);
//		Unfold(mine, show, x , y - 1, &win);
//		Unfold(mine, show, x , y , &win);
//		Unfold(mine, show, x , y + 1, &win);
//		Unfold(mine, show, x + 1, y - 1, &win);
//		Unfold(mine, show, x + 1, y, &win);
//		Unfold(mine, show, x + 1, y + 1, &win);
//	}
//}