//#include<iostream>
//using namespace std;
////��̬���������
////1��һ���м̳й�ϵ
////2����������д�����е��麯��
//
////��̬��ʹ��
////�����ָ��������ã�ִ������Ķ���
//
//
//
////������
//class Animal {
//public:
//	//�麯��
//	void virtual doSpeak() { 
//		cout << "������˵��" << endl;
//	}
//};
////Сè��
//class Cat:public Animal {
//public:
//	void doSpeak() {
//		cout << "è��˵��" << endl;
//	}
//};
//
////С����
//class Dog :public Animal {
//public:
//	void doSpeak() {
//		cout << "С����˵��" << endl;
//	}
//};
//
////��ַ���   �ڱ���׶�ȷ�������ĵ�ַ
//void AniSpeak(Animal& a) {
//	//cout << "�ҽ���һ����Ҵ�Ӧ��" << endl;
//	a.doSpeak();
//}
//
//void test01() {
//	Cat c1;
//	AniSpeak(c1);
//}
//void test02() {
//	Dog d1;
//	AniSpeak(d1);
//}
//
//int main() {
//	//test01();
//	test02();
//	return 0;
//}