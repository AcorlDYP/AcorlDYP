//#include<iostream>
//using namespace std;
////���麯���﷨
////virtual �������� ������() = 0;
////ֻҪһ��������һ�����麯������ô�������ǳ����࣡
////��������ص�
////1.����ʵ��������
////2.���������д����Ĵ��麯��������Ҳ���Ϊ�����࣡
//
//
////������
//class Base {
//public:
//	virtual void func() = 0;
//};
//
////����1
//class Son1:public Base {
//public:
//	void func() {
//		cout << "son1����func����" << endl;
//	}
//};
////����2
//class Son2 :public Base {
//public:
//	void func() {
//		cout << "son2����func����" << endl;
//	}
//};
//
////��������
//void test01() {
//
//	//��̬��ʹ�÷�ʽ��ͨ�������ָ���������ָ���������
//	Base* base1 = new Son1;
//	base1->func();
//
//	//�ͷŵ�ǰbase1��ָ��Ķѿռ�
//	delete base1;
//
//	//base1ָ���µ�һ��ռ�
//	base1 = new Son2;
//	base1->func();
//		
//	//������ͷ�base1ָ��
//	delete base1;
//	base1 = NULL;
//}
//
//
//
//int main() {
//	
//	test01();
//
//	return 0;
//}