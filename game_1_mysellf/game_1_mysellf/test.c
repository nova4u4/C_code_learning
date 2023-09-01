#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu()
{
	printf("***********************************\n");
	printf("********   1.play  0.exit   *******\n");
	printf("***********************************\n");
}


void game()
{
	// 1.��ʼ������
	char Board[ROW][COL] = { 0 };
	char ret = '0';
		InitBoard(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		while (1)
		{
			PlayerMove(Board, ROW, COL);
			DisplayBoard(Board, ROW, COL);
			ret = IsWin(Board, ROW, COL);

			if (ret != 'C')
			{
				break;
			}

			ComputerMove(Board, ROW, COL);
			DisplayBoard(Board, ROW, COL);
			ret = IsWin(Board, ROW, COL);

			if (ret != 'C')
			{
				break;
			}
		}

		if (ret == '*')
		{
			printf("С��ʤ��\n");
		}
		else if (ret == '#')
		{
			printf("����ʤ��\n");
		}
		else
		{
			printf("ƽ��\n");
		}
}
	  


int main()
{
	srand((unsigned int)time(NULL));   //����������������
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}


