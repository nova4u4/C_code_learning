#define _CRT_SECURE_NO_WARNINGS
#include"game2.h"

void menu()
{
	printf("******************************\n");
    printf("******* 1.play  0.exit  ******\n");
	printf("******************************\n");
}


void game()
{

	// 1.��ʼ��

	char mine[ROWS][COLS] = { 0 };    //��������
	char show[ROWS][COLS] = { 0 };     //��ʾ�ܱ���������
	                                  // ����߽��ж� ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	// 2.����
	Setmine(mine,ROW,COL);


	// 3.��ʾ
	//ֻ��ʾ9*9
	DisplayBoard(show, ROW, COL);

	// 4.�Ų�
	Findmine(mine, show, ROW, COL);

	
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("%������:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);






	return 0;
}