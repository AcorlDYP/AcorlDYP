#include<iostream>
using namespace std;

//电脑的三大部件类
//CPU
class CPU {
public:
	virtual void process() = 0;
	//基类的虚析构函数，解决子类子在堆中释放空间问题！
	//在多态中指针的父类指针但是具体对象是子类对象
	//父类指针不能直接释放子类对象在堆中的内存，所以必须在父类中声明虚析构函数！！！
	virtual ~CPU() {};
};

//GPU
class GPU{
public:
	virtual void display() = 0;
	virtual ~GPU() {};
};

//MEMORY
class MEMORY {
public:
	virtual void save() = 0;
	virtual ~MEMORY() {};
};

//各厂商类
//Intel
//在继承中是不建议同时继承多个父类的，因为可能造成菱形继承问题，以及同名属性和同名函数无法辨别的问题！
class Intel :public CPU, public GPU,public MEMORY {
public:

	//处理器
	void process() {
		cout << "Intel处理器正在运行..." << endl;
	}

	//显卡
	void display() {
		cout << "Intel显卡正在运行..." << endl;
	}

	//内存
	void save() {
		cout << "Intel内存正在运行..." << endl;
	}
};

//联想
class LIANXIANG:public CPU, public GPU, public MEMORY {
public:

	//处理器
	void process() {
		cout << "联想处理器正在运行..." << endl;
	}

	//显卡
	void display() {
		cout << "联想显卡正在运行..." << endl;
	}

	//内存
	void save() {
		cout << "联想内存正在运行..." << endl;
	}
};

//ADM
class AMD:public CPU, public GPU, public MEMORY {
public:

	//处理器
	void process() {
		cout << "AMD处理器正在运行..." << endl;
	}

	//显卡
	void display() {
		cout << "AMD显卡正在运行..." << endl;
	}

	//内存
	void save() {
		cout << "AMD内存正在运行..." << endl;
	}
};

//computer
class Computer {
public:

	//构造函数，形参是各个基类的指针,而实参是各派生类的具体对象！
	//在没有传参时，电脑的默认配置都由联想构成！
	Computer(CPU* cpu, GPU* gpu, MEMORY* memory) {
		m_Cpu = cpu;
		m_Gpu = gpu;
		m_Memory = memory;
	}

	//使用电脑
	void UseComputer() {
		cout << "电脑正在启动..." << endl;
		m_Cpu->process();
		m_Gpu->display();
		m_Memory->save();

	}

	//析构函数
	//~Computer(){
	//	cout << "电脑的析构函数调用" << endl;
	//}

	~Computer() {
		if (m_Cpu != NULL) {

			//用父类指针释放子类对象的空间必须在父类中声明虚析构函数!
			delete m_Cpu;
			m_Cpu = NULL;
		}
		if (m_Gpu != NULL) {
			delete m_Gpu;
			m_Gpu = NULL;
		}
		if (m_Memory != NULL) {
			delete m_Memory; 
			m_Memory = NULL;
		}

	}

	//增强代码的安全性
private:

	CPU* m_Cpu;
	GPU* m_Gpu;
	MEMORY* m_Memory;
};

void test01() {


	//实例化一个电脑对象，实参传递的是派生类的对象！
	//这一过程构成了多态！
	//传递参数，构造计算机的具体对象,第一位是CPU，第二位是GPU，第三位是内存！
	Computer c1(new Intel,new LIANXIANG,new AMD);
	c1.UseComputer();

	//默认状态下的电脑！
	//Computer c2;
	//c2.UseComputer();

}


int main() {
	test01();
	return 0;
}

//多继承的顺序也会产生影响吗？、
//我的猜想是：在创建对象的过程中，