#include "game1.h"
void InitBoard(char board[ROW][COL],int row,int col)//形参写成小写
{
	int i = 0;int j = 0;
	for (i = 0;i < row;i++) 
	{
		for (j = 0 ;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{	
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0;j < col;j++)
		{	
			if (i < row - 1)
			{
				
				if (j < col - 1)
				{
					printf("---|");
				}
				else
				{
					printf("---");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) 
{
	int x = 0;int y = 0;
	while (1)
	{
		printf("玩家走：>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用,请重新输入!\n");
			}
		}
		else
		{
			printf("输入的坐标不合法，请重新输入!\n");
		}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	int x = 0;
	int y = 0;	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
}
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	return ++i;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++) 
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] !=' ')
		{
			return board[i][0];
		}
	}
	for (j = 0;j < col;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//这里不存在两者都赢而导致平局的情况，因为下棋有先后顺序，所以赢家只有一个，而要出现平局，只有当棋盘被下满的情况
	if (IsFull == 9)
	{
		return 'E';
	}
	else {
		return 'C';
	}
}