#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>//这是引用srand的头文件
#include <time.h>//这是引用时间戳的头文件
//声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);//棋盘显示
void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋 

char IsWin(char board[ROW][COL], int row, int col);
//这里通过判断返回值来确定输赢
//如果返回值为*，则玩家赢
//如果返回值为#，则电脑赢
//如果返回值为C，则继续
//如果返回值为E，则平局