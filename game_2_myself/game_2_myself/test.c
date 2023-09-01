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

	// 1.初始化

	char mine[ROWS][COLS] = { 0 };    //布雷数组
	char show[ROWS][COLS] = { 0 };     //显示周边雷数数组
	                                  // 避免边界判定 作延拓
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	// 2.埋雷
	Setmine(mine,ROW,COL);


	// 3.显示
	//只显示9*9
	DisplayBoard(show, ROW, COL);

	// 4.排查
	Findmine(mine, show, ROW, COL);

	
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("%请输入:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);






	return 0;
}