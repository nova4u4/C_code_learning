#pragma once
#include<time.h>
#define ROW 3
#define COL 3

// game.h  游戏代码的声明
void InitBoard(char board[ROW][COL], int row, int col); // 初始化棋盘

void DisplayBoard(char board[ROW][COL], int row, int col);  //棋盘显示

void PlayerMove(char board[ROW][COL],int row, int col);   //玩家下棋

void ComputerMove(char board[ROW][COL], int row, int col);  //电脑下棋

char IsWin(char board[ROW][COL], int row, int col);