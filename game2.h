#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define EASY_COUNT 10  

#define ROWS ROW+2 //定义里面是没有等号的！
#define COLS COL+2
//声明     这个的参数都是形参，需要详细书写
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//扫雷游戏初始化，这里添加char set让这个初始化操作能够进行不同类型的初始化操作！
void DisplayBoard(char board[ROWS][COLS], int row, int col);//打印棋盘
void SetMine(char board[ROWS][COLS], int row, int col);//布雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);//扫雷