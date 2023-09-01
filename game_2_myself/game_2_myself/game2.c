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
	// �������� ����Ҫ��ӡ����
	// ��������ѭ���� ÿ��ǰ���һ��   ������ֱ���ڵ�һ����д
	int i = 1;
	int j = 1;
	int k = 0;
	printf("-------------------ɨ����Ϸ------------------\n");
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
	printf("-------------------ɨ����Ϸ------------------\n");
}



void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = MINENUM;
	// 1~9 ʹ������� % 9  ����0~8   +1���� 1~9

	while (count)
	{
		int x = rand() % row + 1;    // 1~9�����
		int y = rand() % col + 1;    // 1~9�����

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;      //ʹ��count��while����ѭ�� Ҳ��һ��˼·
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
	if (x<1 || x>ROW || y<1 || y>COL)       //������Ƿ�ʱ��ֹͣ�ݹ飬������һ�㺯��
	{
		return;
	}
	if (show[x][y] != '*')       //�� show �����ڸ������ϵ�Ԫ�ز�Ϊ '*' ʱ��
	                    	  // ��ʾ�������ѱ��Ų������ֹͣ�ݹ飬������һ�㺯��
	{
		return;
	}
	int count = get_mine_num(mine, x, y);      //���ú�������������Χ��8�������м�������
	if (count > 0)               //����������Χ�ĵ�����������0ʱ�����ݹ�
	{
		(*win)++;                
		show[x][y] = count + '0';       //���� show ����Ϊ char ���ͣ����� count���� '0'
		           //ʹ��������Χ�ĵ��׸�����Ϊ�ַ� '���׸���'������������ show ����Ԫ�����Ͷ�Ӧ����
		return;
	}
	else if (count == 0)       //����������Χ�ĵ�����������0ʱ���ݹ麯����
		                       // ����Χ��8���������ε��� Unfold ����
	{
		(*win)++;               //ÿ�������������겻�ǵ���ʱ��win++
		show[x][y] = '0';       //�����ǵ��׵����긳ֵΪ'0'�������Ӫ���������û�е��׵��Ӿ�Ч��
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

		printf("%�������Ų�����:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("%���Ų飬����������\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("���ź�,�㱻ը����\n");
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
			printf("�����������������\n");
		}
		if (win == row * col - MINENUM)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			break;
		}
	}




}