#include "game2.h"


//1.初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows ;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
//2.打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i = 1;i <= row;i++)
	{
		if (i > 1)
		{
			printf(" %d ", i);
		}
		else
		{
			printf("  %d ", i);
		}
		
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d", i);
		for (j = 1;j <= col;j++)
		{
			printf(" %c ",board[i][j]);
		}
		printf("\n");
	}
}
//3.布雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int a = rand() % 9 + 1;
		int b = rand() % 9 + 1;
		if (board[a][b] == '0')
		{
			board[a][b] = '1';
			count--;		
		}
	}
	
}
//这里存在一个问题：mine数组中存放的是字符而不是数字，怎么讲字符'1'转化成数字1：'1'-'0' = 1
int GetMineCount(char mine[ROWS][COLS], int x,int y)
{
	return mine[x - 1][y - 1] - '0' 
		+ mine[x - 1][y] - '0' 
		+ mine[x - 1][y + 1] - '0' 
		+ mine[x][y - 1] - '0'
		+ mine[x][y + 1] - '0'
		+ mine[x + 1][y - 1] - '0' 
		+ mine[x + 1][y] - '0' 
		+ mine[x + 1][y + 1] - '0';//这里也可以把字符0乘以8再减去，这里是字符0的Ascii码与8相乘，而不是0与8相乘。
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int i = 0;
	while (1)
	{
		printf("请输入坐标：>");
		scanf_s("%d%d", &x, &y);
		i++;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("您踩到地雷了！#为你所踩地雷\n");
				show[x][y] = '#';
				DisplayBoard(show, row, col);
				break;
			}
			else
			{
				if (i == row * col - EASY_COUNT)
				{
					printf("恭喜您完成扫雷任务！");
					break;
				}
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//这里count是数字，加上字符0就能够转化成字符了。
				DisplayBoard(show, row, col);
		
			}
		}
		else
		{
			printf("坐标非法!");
		}
	}
}