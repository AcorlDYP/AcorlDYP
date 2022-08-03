//#include<iostream>
//using namespace std;
////多态满足的条件
////1、一定有继承关系
////2、子类中重写父类中的虚函数
//
////多态的使用
////父类的指针或者引用，执行子类的对象！
//
//
//
////动物类
//class Animal {
//public:
//	//虚函数
//	void virtual doSpeak() { 
//		cout << "动物在说话" << endl;
//	}
//};
////小猫类
//class Cat:public Animal {
//public:
//	void doSpeak() {
//		cout << "猫在说话" << endl;
//	}
//};
//
////小狗类
//class Dog :public Animal {
//public:
//	void doSpeak() {
//		cout << "小狗在说话" << endl;
//	}
//};
//
////地址早绑定   在编译阶段确定函数的地址
//void AniSpeak(Animal& a) {
//	//cout << "我叫你一声你敢答应吗" << endl;
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