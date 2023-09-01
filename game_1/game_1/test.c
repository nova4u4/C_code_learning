#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ��Ϸ����Ĳ���
menu()
{
	printf("*********************************\n");
	printf("********   1.play  0.exit   *****\n");
	printf("*********************************\n");
}

#include "game.h"

void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };  //ϣ��ÿ��Ԫ�ض��ǿո�

	//��ʼ������
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);          // ��ӡ��������

	// ����
	while (1)
	{
		PlayerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')  //C��ʾ����
		{
			break;
	    }
		
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// �ж���Ӯ
		DisplayBoard(board, ROW, COL);
       
	}
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
    
}

int main()
{

	srand((unsigned int)time(NULL)); //������������������


	int input = 0;
	do          //�������в˵� �����do whileѭ��
	{
		menu(); //��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			// printf("������\n");        //����printf�����������߼�
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default: 
			printf("ѡ�����\n");
			break;
		}
	} while (input);



	return 0;
}