#include "game2.h"

void menu() {
	printf("****************************\n");
	printf("*****1.paly      0.exit*****\n");
	printf("****************************\n");
}
void game() {

	//1.�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	InitBoard(mine, ROWS, COLS, '0');//����ֱ�����ʵ�ξͿ�����
	//2.�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	InitBoard(show, ROWS, COLS, '*');
	//3.��ӡ����
	//DisplayBoard(mine,ROW,COL);//ʵ��ֻд���������������Լ���������ʱ��Ҫ����д������
	//DisplayBoard(show,ROW,COL);
	//4.����
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//5.ɨ��
	FindMine(mine, show, ROW, COL);
	printf("���ײ������£�\n");
	DisplayBoard(mine, ROW, COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL)); 
	do {
		menu();
		printf("�����룺>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ��\n");
			break;
		default:printf("��������Ч���֣�\n");
			break;
		}
	} while (input);
}

int main() {
	
	test();
	return 0;
}