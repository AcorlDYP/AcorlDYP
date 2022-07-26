

#include "game1.h"
void menu() {
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
//游戏的整个算法实现
void game() {
	//首先构建一个二维数组
	char board[ROW][COL] = { 0 };//*三子棋的本质是一个二维数组，零是不可打印字符(这里是char数据，0在char数组中表示/0，即终止符不算字符，所以不会被打印)
	InitBoard(board, ROW, COL);//棋盘初始化
	DisplayBoard(board, ROW, COL);//显示棋盘
	char  ret = ' ';
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//显示棋盘
		ret = IsWin(board,ROW,COL);//判断玩家是否赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//显示棋盘
		ret = IsWin(board, ROW, COL);//判断电脑是否赢
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret == '#')
	{
		printf("电脑胜。\n");
	}
	if (ret == '*')
	{
		printf("恭喜您获得胜利！\n");
	}
	if (ret == 'E')
	{
		printf("平局。\n");
	}
}
void test() {
	srand((unsigned int)time(NULL));//用时间戳来找到随机值，用unsigned int将时间戳转化成整型
	int input = 0;
	do {
		menu();
		printf("请按菜单数字进行输入：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("数字非法，请重新输入\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}