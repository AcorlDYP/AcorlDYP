#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>//��������srand��ͷ�ļ�
#include <time.h>//��������ʱ�����ͷ�ļ�
//����
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//������ʾ
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//�������� 

char IsWin(char board[ROW][COL], int row, int col);
//����ͨ���жϷ���ֵ��ȷ����Ӯ
//�������ֵΪ*�������Ӯ
//�������ֵΪ#�������Ӯ
//�������ֵΪC�������
//�������ֵΪE����ƽ��