#include<iostream>
using namespace std;

//���Ե����󲿼���
//CPU
class CPU {
public:
	virtual void process() = 0;
	//���������������������������ڶ����ͷſռ����⣡
	//�ڶ�̬��ָ��ĸ���ָ�뵫�Ǿ���������������
	//����ָ�벻��ֱ���ͷ���������ڶ��е��ڴ棬���Ա����ڸ�������������������������
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

//��������
//Intel
//�ڼ̳����ǲ�����ͬʱ�̳ж������ģ���Ϊ����������μ̳����⣬�Լ�ͬ�����Ժ�ͬ�������޷��������⣡
class Intel :public CPU, public GPU,public MEMORY {
public:

	//������
	void process() {
		cout << "Intel��������������..." << endl;
	}

	//�Կ�
	void display() {
		cout << "Intel�Կ���������..." << endl;
	}

	//�ڴ�
	void save() {
		cout << "Intel�ڴ���������..." << endl;
	}
};

//����
class LIANXIANG:public CPU, public GPU, public MEMORY {
public:

	//������
	void process() {
		cout << "���봦������������..." << endl;
	}

	//�Կ�
	void display() {
		cout << "�����Կ���������..." << endl;
	}

	//�ڴ�
	void save() {
		cout << "�����ڴ���������..." << endl;
	}
};

//ADM
class AMD:public CPU, public GPU, public MEMORY {
public:

	//������
	void process() {
		cout << "AMD��������������..." << endl;
	}

	//�Կ�
	void display() {
		cout << "AMD�Կ���������..." << endl;
	}

	//�ڴ�
	void save() {
		cout << "AMD�ڴ���������..." << endl;
	}
};

//computer
class Computer {
public:

	//���캯�����β��Ǹ��������ָ��,��ʵ���Ǹ�������ľ������
	//��û�д���ʱ�����Ե�Ĭ�����ö������빹�ɣ�
	Computer(CPU* cpu, GPU* gpu, MEMORY* memory) {
		m_Cpu = cpu;
		m_Gpu = gpu;
		m_Memory = memory;
	}

	//ʹ�õ���
	void UseComputer() {
		cout << "������������..." << endl;
		m_Cpu->process();
		m_Gpu->display();
		m_Memory->save();

	}

	//��������
	//~Computer(){
	//	cout << "���Ե�������������" << endl;
	//}

	~Computer() {
		if (m_Cpu != NULL) {

			//�ø���ָ���ͷ��������Ŀռ�����ڸ�������������������!
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

	//��ǿ����İ�ȫ��
private:

	CPU* m_Cpu;
	GPU* m_Gpu;
	MEMORY* m_Memory;
};

void test01() {


	//ʵ����һ�����Զ���ʵ�δ��ݵ���������Ķ���
	//��һ���̹����˶�̬��
	//���ݲ��������������ľ������,��һλ��CPU���ڶ�λ��GPU������λ���ڴ棡
	Computer c1(new Intel,new LIANXIANG,new AMD);
	c1.UseComputer();

	//Ĭ��״̬�µĵ��ԣ�
	//Computer c2;
	//c2.UseComputer();

}


int main() {
	test01();
	return 0;
}

//��̳е�˳��Ҳ�����Ӱ���𣿡�
//�ҵĲ����ǣ��ڴ�������Ĺ����У�