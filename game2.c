#include "game2.h"


//1.��ʼ��
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
//2.��ӡ����
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
//3.����
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
//�������һ�����⣺mine�����д�ŵ����ַ����������֣���ô���ַ�'1'ת��������1��'1'-'0' = 1
int GetMineCount(char mine[ROWS][COLS], int x,int y)
{
	return mine[x - 1][y - 1] - '0' 
		+ mine[x - 1][y] - '0' 
		+ mine[x - 1][y + 1] - '0' 
		+ mine[x][y - 1] - '0'
		+ mine[x][y + 1] - '0'
		+ mine[x + 1][y - 1] - '0' 
		+ mine[x + 1][y] - '0' 
		+ mine[x + 1][y + 1] - '0';//����Ҳ���԰��ַ�0����8�ټ�ȥ���������ַ�0��Ascii����8��ˣ�������0��8��ˡ�
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int i = 0;
	while (1)
	{
		printf("���������꣺>");
		scanf_s("%d%d", &x, &y);
		i++;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ȵ������ˣ�#Ϊ�����ȵ���\n");
				show[x][y] = '#';
				DisplayBoard(show, row, col);
				break;
			}
			else
			{
				if (i == row * col - EASY_COUNT)
				{
					printf("��ϲ�����ɨ������");
					break;
				}
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//����count�����֣������ַ�0���ܹ�ת�����ַ��ˡ�
				DisplayBoard(show, row, col);
		
			}
		}
		else
		{
			printf("����Ƿ�!");
		}
	}
}