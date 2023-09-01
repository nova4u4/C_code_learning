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
	// 1~9 ʹ������� % 9  ����0~8   +1���� 1~9

	while (count)
	{
		int x = rand() % row + 1;    //1~9�����
		int y = rand() % col + 1;      // 1~9�����

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;      //ʹ��count��while����ѭ�� Ҳ��һ��˼·
		}

	}

}





void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("-------------------ɨ����Ϸ----------------------\n");
	
	int k = 0;
	for (k = 0; k <= col; k++)     //�����ӡ ������͵����ȴ�ӡһ��
	{
		printf("%d ",k);
	}
	printf("\n");



	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);       //�����ӡ ���������ÿ��ǰ���һ����ӡ����
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------ɨ����Ϸ----------------------\n");

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

	while(win<row*col - EASY_COUNT)   // �����������������жϴ�������while
	{
		printf("��������Ҫ�Ų������:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�����걻�Ų���ˣ������Ų�\n");
			}
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //��������� ͳ��show 
			{
				win++;
				count=get_mine_count(mine,x,y);

				show[x][y] = count + '0';
				// ����ת�����ַ�  ԭֵ+'0'��ASCII��
				DisplayBoard(show, ROW, COL);
				
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			DisplayBoard(show, ROW, COL);
		}
	}
}