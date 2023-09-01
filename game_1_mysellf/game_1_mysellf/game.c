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
	printf("С������\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("����������\n");   //����������Ӧ����1��3  ������������ 0��2
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
				printf("��λ���������ӣ�������Ч\n");
			}
		}
		else
		{
			printf("%�������\n");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col) 
{
	printf("��������\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % ROW;    //ȡģ ��Χ0~2
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
	//1.�ж���
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ')
		{
			return Board[i][0];
		}
	}

	//2.�ж���
	for (j = 0; j < col; j++)
	{
		if (Board[0][j] == Board[1][j] && Board[0][j] == Board[2][j] && Board[0][j] != ' ')
		{
			return Board[0][j];
		}
	}

	//3.�ж϶Խ���
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ')
	{
		return Board[0][0];
	}

	if (Board[0][2] == Board[1][1] && Board[2][0] == Board[1][1] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}

	// ƽ��
	int ret = IsFull(Board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';
}