//#include<iostream>
//using namespace std;
////纯虚函数语法
////virtual 函数类型 函数名() = 0;
////只要一个类内有一个纯虚函数，那么这个类就是抽象类！
////抽象类的特点
////1.不能实例化对象
////2.子类必须重写父类的纯虚函数，否则也会成为抽象类！
//
//
////抽象父类
//class Base {
//public:
//	virtual void func() = 0;
//};
//
////子类1
//class Son1:public Base {
//public:
//	void func() {
//		cout << "son1调用func函数" << endl;
//	}
//};
////子类2
//class Son2 :public Base {
//public:
//	void func() {
//		cout << "son2调用func函数" << endl;
//	}
//};
//
////测试用例
//void test01() {
//
//	//多态的使用方式：通过父类的指针或者引用指向子类对象
//	Base* base1 = new Son1;
//	base1->func();
//
//	//释放当前base1所指向的堆空间
//	delete base1;
//
//	//base1指向新的一块空间
//	base1 = new Son2;
//	base1->func();
//		
//	//最后再释放base1指针
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