#define _CRT_SECURE_NO_WARNINGS
#include"game2.h"


// 如果棋盘9*9  使用两个数组 
// 一个用于放置雷 一个用于显示雷数量  并且大一圈 变为11*11  不需要判断边界

void menu()
{
	printf("**********************************\n");
	printf("********  1.play  0.exit  ********\n");
	printf("**********************************\n");
}


void game2()
{
	//1.初始化
	char mine[ROWS][COLS] = { 0 };   //     布置雷数组 初始化没有雷的时候都是0
	char show[ROWS][COLS] = { 0 };   // 雷数量显示数组 初始化都是*
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//2.埋雷

	Setmine(mine, ROW, COL);


	//3.显示
	DisplayBoard(mine, ROW, COL);  //布雷不让看 看的是显示雷数
	DisplayBoard(show, ROW, COL);

	//4.排查雷 既需要mine 也需要show
	FineMine(mine, show, ROW, COL);
	
}




int main()
{

	srand((unsigned int)time(NULL));

	int input = 0;
	do          //上来就有菜单 因此用do while循环
	{
		menu(); //打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game2();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);



	return 0;
}