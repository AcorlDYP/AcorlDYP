//#include<iostream>
//using namespace std;
//
////��Ʒ�ĸ���
//class Beverage {
//
//public:
//	//��ˮ
//	virtual void boil() = 0;
//	//����
//	virtual void brew() = 0;
//	//���뱭��
//	virtual void putInCup() = 0;
//	//��������
//	virtual void putThing() = 0;
//
//	void makeDrink() {
//		boil();
//		brew();
//		putInCup();
//		putThing();
//		cout << "������ɣ�" << endl;
//	}
//};
//
////coffee
//class Coffee:public Beverage {
//public:
//	//��д�麯��
//	void boil() {
//		cout << "��ˮ��" << endl;
//	}
//	void brew() {
//		cout << "���ݿ�����" << endl;
//	}
//	void putInCup() {
//		cout << "���ڵ��뱭��" << endl;
//	}
//	void putThing() {
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////tea
//class Tea :public Beverage {
//public:
//	//��д�麯��
//	void boil() {
//		cout << "��ˮ��" << endl;
//	}
//	void brew() {
//		cout << "���ݲ�Ҷ��" << endl;
//	}
//	void putInCup() {
//		cout << "���ڵ��뱭��" << endl;
//	}
//	void putThing() {
//		cout << "�������ʻ������" << endl;
//	}
//};
//
//void makeBeverage(Beverage * b) {
//	b->makeDrink();
//}
//
//void test01() {
//	makeBeverage(new Coffee);
//	makeBeverage(new Tea);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}