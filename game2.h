#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define EASY_COUNT 10  

#define ROWS ROW+2 //����������û�еȺŵģ�
#define COLS COL+2
//����     ����Ĳ��������βΣ���Ҫ��ϸ��д
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//ɨ����Ϸ��ʼ�����������char set�������ʼ�������ܹ����в�ͬ���͵ĳ�ʼ��������
void DisplayBoard(char board[ROWS][COLS], int row, int col);//��ӡ����
void SetMine(char board[ROWS][COLS], int row, int col);//����
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);//ɨ��