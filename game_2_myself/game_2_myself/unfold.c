#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game2.h"
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define MINENUM 10


// �ݹ�˼·
// 1.�Լ�������(�����������) 2.��Χû����(get_num=0) 3.�ڱ߽緶Χ��  4.û���ų���(�������� �����ظ�)

// �ص�ݹ��� ������չ�� ���������
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
//	if (x<1 || x>ROW || y<1 || y>COL)  //1.��������߽� �����ݹ� �����ϲ�
//	{
//		return;
//	}
//	
//	if (show[x][y] != '*')       //����Ų�� �����ݹ� �����ϲ�
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
//		return;          // �����Χ���� ����show �����ݹ� �����ϲ�
//	}
//	else if (count == 0)
//	{
//		show[x][y] = '0';      //�ݹ� �Ų������� ����չ��
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