

#include "game1.h"
void menu() {
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
//��Ϸ�������㷨ʵ��
void game() {
	//���ȹ���һ����ά����
	char board[ROW][COL] = { 0 };//*������ı�����һ����ά���飬���ǲ��ɴ�ӡ�ַ�(������char���ݣ�0��char�����б�ʾ/0������ֹ�������ַ������Բ��ᱻ��ӡ)
	InitBoard(board, ROW, COL);//���̳�ʼ��
	DisplayBoard(board, ROW, COL);//��ʾ����
	char  ret = ' ';
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ʾ����
		ret = IsWin(board,ROW,COL);//�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ʾ����
		ret = IsWin(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret == '#')
	{
		printf("����ʤ��\n");
	}
	if (ret == '*')
	{
		printf("��ϲ�����ʤ����\n");
	}
	if (ret == 'E')
	{
		printf("ƽ�֡�\n");
	}
}
void test() {
	srand((unsigned int)time(NULL));//��ʱ������ҵ����ֵ����unsigned int��ʱ���ת��������
	int input = 0;
	do {
		menu();
		printf("�밴�˵����ֽ������룺>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("���ַǷ�������������\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}