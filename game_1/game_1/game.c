// game.c ��Ϸ����ʵ�ֵĺ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>     //��Ҫstdio��game ��ʵ���԰�stdio��game.h������ ������Ƕ��
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

//void DisplayBoard(char board[ROW][COL], int row, int col)   //�汾1 ���������
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
	printf("�������:>\n");
	
	int x = 0;
	int y = 0;
	

	while (1)  //�Ϸ��Լ��
	{
		printf("����������\n");  // ��ҵ�����Ӧ����1-3
		scanf("%d %d", &x, &y);   //����ѭ���� �������治break��ѭ����ʾ
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã��������壬��ѡ������λ��\n");
			}
		}
		else
		{
			printf("�Ƿ����룬����������\n");
		}
	}
}




void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");

	int x = 0;
	int y = 0;

	while (1)           //������while(1) Ȼ�������if break ������ѭ�� ��˼��
	{
		x = rand() % row; //��3ȡģ ���Եõ�0/1/2   ���Ҫ+1
		y = rand() % col; // srand���������ж���

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
	return 1;    //������� ����1
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//���ж��� 
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1]; // ������ ��˭�ͷ���˭Ӯ ���ѡ��* �� #
		}
	}

	//���ж���
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[1][j]; // ������ ��˭�ͷ���˭Ӯ ���ѡ��* �� #
		}
	}

	//����ж϶Խ���
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
		return 'Q';  //Q��ƽ��
	}

	return 'C';  //���û��ʤƽ�� ���ؼ���
}