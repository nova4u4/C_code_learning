#define _CRT_SECURE_NO_WARNINGS
#include"game2.h"


// �������9*9  ʹ���������� 
// һ�����ڷ����� һ��������ʾ������  ���Ҵ�һȦ ��Ϊ11*11  ����Ҫ�жϱ߽�

void menu()
{
	printf("**********************************\n");
	printf("********  1.play  0.exit  ********\n");
	printf("**********************************\n");
}


void game2()
{
	//1.��ʼ��
	char mine[ROWS][COLS] = { 0 };   //     ���������� ��ʼ��û���׵�ʱ����0
	char show[ROWS][COLS] = { 0 };   // ��������ʾ���� ��ʼ������*
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//2.����

	Setmine(mine, ROW, COL);


	//3.��ʾ
	DisplayBoard(mine, ROW, COL);  //���ײ��ÿ� ��������ʾ����
	DisplayBoard(show, ROW, COL);

	//4.�Ų��� ����Ҫmine Ҳ��Ҫshow
	FineMine(mine, show, ROW, COL);
	
}




int main()
{

	srand((unsigned int)time(NULL));

	int input = 0;
	do          //�������в˵� �����do whileѭ��
	{
		menu(); //��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game2();
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