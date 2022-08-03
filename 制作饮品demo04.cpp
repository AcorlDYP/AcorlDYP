//#include<iostream>
//using namespace std;
//
////饮品的父类
//class Beverage {
//
//public:
//	//煮水
//	virtual void boil() = 0;
//	//冲泡
//	virtual void brew() = 0;
//	//倒入杯中
//	virtual void putInCup() = 0;
//	//加入佐料
//	virtual void putThing() = 0;
//
//	void makeDrink() {
//		boil();
//		brew();
//		putInCup();
//		putThing();
//		cout << "冲泡完成！" << endl;
//	}
//};
//
////coffee
//class Coffee:public Beverage {
//public:
//	//重写虚函数
//	void boil() {
//		cout << "煮水中" << endl;
//	}
//	void brew() {
//		cout << "冲泡咖啡中" << endl;
//	}
//	void putInCup() {
//		cout << "正在倒入杯中" << endl;
//	}
//	void putThing() {
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////tea
//class Tea :public Beverage {
//public:
//	//重写虚函数
//	void boil() {
//		cout << "煮水中" << endl;
//	}
//	void brew() {
//		cout << "冲泡茶叶中" << endl;
//	}
//	void putInCup() {
//		cout << "正在倒入杯中" << endl;
//	}
//	void putThing() {
//		cout << "加入柠檬或者枸杞" << endl;
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