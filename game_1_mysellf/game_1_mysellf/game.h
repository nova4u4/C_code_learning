#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3

void InitBoard(char Board[ROW][COL],int row,int col);
void DisplayBoard(char Board[ROW][COL],int row,int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char IsWin(char Board[ROW][COL], int row, int col);