//#include<iostream>
//#include<string>
//using namespace std;
//
////������
//class Animal {
//public:
//	//���캯���ǲ���ʹ���麯����
//	Animal() {
//
//		cout << "animal���ڵ��ù��캯��" << endl;
//
//	}
//	//����������
//	//virtual ~Animal() {
//
//	//	cout << "animal���ڵ�����������" << endl;
//
//	//}
//
//	//������������(�����Ҳ�������ڳ�����)
//	//��������������Ҫ�ں�������������ʵ��
//	//��Ϊ�����Ҳ������ʵ�����Ĺ����п��ٶ��ϵĿռ�
//	//���Ի�����Ҫ�����ʵ��ʹ֮�ͷŶ��ϵĿռ䣡
//	virtual ~Animal() = 0;
//
//	//����û�жԴ��麯��������д����������˳����಻��ʵ������
//	//�������麯��ָ�� vfptr
//	virtual void speak() = 0;
//};
//
////���麯����ʵ��
//Animal::~Animal() {
//	cout << "���ڵ���animal�еĴ�����������" << endl;
//}
//
//
////è��
//class Cat :public Animal {
//public:
//
//	//���캯��
//	 Cat(string name) {
//		//*m_Name = name;
//		m_Name = new string(name);
//		cout << "cat���ڵ��ù��캯��" << endl;
//	}
//	//��������
//	 ~Cat() {
//		cout << "cat���ڵ�����������" << endl;
//		delete m_Name;
//		m_Name = NULL;
//	}
//
//	void speak() {
//		cout <<*m_Name<< "è������" << endl;
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
//	//��animal���д�����������������¶������ʵ����
//	//Animal a;������������Ҳ�Ǵ��麯�����и��ຯ��������޷�����ʵ������
//
//
//	return 0;
//}

//newһ���ռ�ȼ���ʹ��malloc�ڶ��Ͽ���һ���ʵ��Ŀռ䣬���ҽ����еķǾ�̬��Ա�������롣
//���Գ�ʼ��һ��ָ��󣬿�����ָ��ָ��һ��new���Ķ���ռ䣬���ǲ������ý���������ֵ��
//��Ϊָ��ճ�ʼ����û��ָ��һ��ռ䣬ֱ�Ӹ�ֵ����ɷǷ����������Խ����ø�ֵ֮ǰ������mallocһ��ռ䡣