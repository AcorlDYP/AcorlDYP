//#include<iostream>
//using namespace std;
//
////����������
//
//class Calculator {
//
//public:
//	int m_Num1 = 0;
//	int m_Num2 = 0;
//	
//	
//	virtual int CalNum() {
//		return 0;
//	}
//
//};
//
////�ӷ�����������
//class Add :public Calculator {
//	int CalNum() {
//		return m_Num1 + m_Num2;
//	 }
//};
//
////��������������
//class substract :public Calculator {
//	int CalNum() {
//		return m_Num1 - m_Num2;
//	}
//};
//
//
////�˷�����������
//class mutiply :public Calculator {
//	int CalNum() {
//		return m_Num1 * m_Num2;
//	}
//};
//
////��ȡ���
//int getResult(Calculator *c) {
//	return c->CalNum();
//}
//
////���Ժ���
//void test01() {
//	Calculator* c1;
//	c1 = new Add;
//	c1->m_Num1 = 10;
//	c1->m_Num2 = 20;
//	cout << c1->m_Num1 << " + " << c1->m_Num2 << " = " << getResult(c1) << endl;
//}
//
//void test02() {
//	Calculator* c1;
//	c1 = new substract;
//	c1->m_Num1 = 10;
//	c1->m_Num2 = 20;
//	cout << c1->m_Num1 << " - " << c1->m_Num2 << " = " << getResult(c1) << endl;
//}
//
//void test03() {
//	Calculator* c1;
//	c1 = new mutiply;
//	c1->m_Num1 = 10;
//	c1->m_Num2 = 20;
//	cout << c1->m_Num1 << " * " << c1->m_Num2 << " = " << getResult(c1) << endl;
//}
//
//
//
//int main() {
//
//	test01();
//
//	test02();
//
//	test03();
//
//	return 0;
//}

//��̬����
//�̳�
//������麯����������д

//ʹ�÷�ʽ
//ͨ�������ָ�������ָ������

//��̬�ı��ʾ��Ǹ����麯���Ĵ���������������������һ��4�ֽڵ�ָ�룬�����ָ�뱻�������̳У�
//������д������麯������ô����̳еĸ�����麯��ָ����ָ��ĵĺ����ͱ������д�ĺ���������
//�����Ϳ���ͨ�������ָ�������ָ�������������������д�ĺ���

//��̬���ŵ�
//1������֯��
//2���׶���
//3����չ�Ժ�ά���Ը�