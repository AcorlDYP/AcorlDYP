//#include<iostream>
//#include<string>
//using namespace std;
//
////动物类
//class Animal {
//public:
//	//构造函数是不能使用虚函数的
//	Animal() {
//
//		cout << "animal正在调用构造函数" << endl;
//
//	}
//	//虚析构函数
//	//virtual ~Animal() {
//
//	//	cout << "animal正在调用析构函数" << endl;
//
//	//}
//
//	//纯虚析构函数(这个类也就是属于抽象类)
//	//纯虚析构函数需要在函数体外对其进行实现
//	//因为这个类也可能在实例化的过程中开辟堆上的空间
//	//所以还是需要具体的实现使之释放堆上的空间！
//	virtual ~Animal() = 0;
//
//	//这里没有对纯虚函数进行重写导致子类成了抽象类不能实例化！
//	//创建了虚函数指针 vfptr
//	virtual void speak() = 0;
//};
//
////纯虚函数的实现
//Animal::~Animal() {
//	cout << "正在调用animal中的纯虚析构函数" << endl;
//}
//
//
////猫类
//class Cat :public Animal {
//public:
//
//	//构造函数
//	 Cat(string name) {
//		//*m_Name = name;
//		m_Name = new string(name);
//		cout << "cat正在调用构造函数" << endl;
//	}
//	//析构函数
//	 ~Cat() {
//		cout << "cat正在调用析构函数" << endl;
//		delete m_Name;
//		m_Name = NULL;
//	}
//
//	void speak() {
//		cout <<*m_Name<< "猫喵喵喵" << endl;
//	}
//	string *m_Name;
//	//string *m_Name = (string *)malloc(sizeof(string) * 100);
//};
//
//void test01() {
//	Animal* a = new Cat("tom");
//	a->speak();
//	delete a;
//}
//
//int main() {
//	test01();
//	
//	//在animal类有纯虚析构函数的情况下对其进行实例化
//	//Animal a;纯虚析构函数也是纯虚函数，有该类函数的类就无法进行实例化！
//
//
//	return 0;
//}

//new一个空间等价于使用malloc在堆上开辟一块适当的空间，并且将类中的非静态成员变量放入。
//所以初始化一个指针后，可以让指针指向一个new出的对象空间，但是不能是用解引用来赋值。
//因为指针刚初始化并没有指向一块空间，直接赋值会造成非法操作，所以解引用赋值之前必须先malloc一块空间。