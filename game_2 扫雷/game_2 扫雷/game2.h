#pragma once
#include<stdio.h>
#include<time.h>
#include<string.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col); //��Ҫs ��Ϊ��Ҫ��������

void Setmine(char board[ROWS][COLS], int row, int col);

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col);