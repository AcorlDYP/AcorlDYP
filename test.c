#include "game2.h"

void menu() {
	printf("****************************\n");
	printf("*****1.paly      0.exit*****\n");
	printf("****************************\n");
}
void game() {

	//1.布置雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
	InitBoard(mine, ROWS, COLS, '0');//这里直接添加实参就可以了
	//2.排查雷的信息
	char show[ROWS][COLS] = { 0 };
	InitBoard(show, ROWS, COLS, '*');
	//3.打印棋盘
	//DisplayBoard(mine,ROW,COL);//实参只写数组名，在声明以及函数定义时需要将其写完整！
	//DisplayBoard(show,ROW,COL);
	//4.布雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//5.扫雷
	FindMine(mine, show, ROW, COL);
	printf("地雷布局如下：\n");
	DisplayBoard(mine, ROW, COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL)); 
	do {
		menu();
		printf("请输入：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏！\n");
			break;
		default:printf("请输入有效数字！\n");
			break;
		}
	} while (input);
}

int main() {
	
	test();
	return 0;
}