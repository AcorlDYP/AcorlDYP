//#include<iostream>
//using namespace std;
//
////计算器父类
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
////加法计算器子类
//class Add :public Calculator {
//	int CalNum() {
//		return m_Num1 + m_Num2;
//	 }
//};
//
////减法计算器子类
//class substract :public Calculator {
//	int CalNum() {
//		return m_Num1 - m_Num2;
//	}
//};
//
//
////乘法计算器子类
//class mutiply :public Calculator {
//	int CalNum() {
//		return m_Num1 * m_Num2;
//	}
//};
//
////获取结果
//int getResult(Calculator *c) {
//	return c->CalNum();
//}
//
////测试函数
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

//多态条件
//继承
//父类的虚函数被子类重写

//使用方式
//通过父类的指针或引用指向子类

//多态的本质就是父类虚函数的创建，给具体的类中添加了一个4字节的指针，而这个指针被子类所继承，
//子类重写父类的虚函数，那么子类继承的父类的虚函数指针所指向的的函数就被这个重写的函数所覆盖
//这样就可以通过父类的指针或引用指向子类而调用子类中重写的函数

//多态的优点
//1、有组织性
//2、易读性
//3、扩展性和维护性搞