//���� ����
//
//step1. char ����Ʈ�� name, int�� age�� ��������� ����� ����ϴ� 
//		printHuman()�� ����Լ��� ������ Human Ŭ������ �������Ͻÿ�. 
//
//step2. name�� �����Ҵ��� �ϰ�, Human man("�̼���", 50) ��ü�� �����Ͻÿ�.
//
//step3. Human man1(man) ����� �����ϰ� �ڵ带 �����Ͻÿ�.
//
//step4. Human xman ��ü�� �����ϰ� xman = man ������ ��Ű�ÿ�. 

#include <iostream>
using namespace std;

//class Human
//{
//public:
//
//	Human(const char* name, int age)
//	{
//		strcpy(this->name, name);
//		this->age = age;
//	}
//
//	void printHuman()
//	{
//		cout << "�̸� :" << name << " , " << "���� :" << age << endl;
//	}
//
//private:
//	char name[20];
//	int age;
//};

class Human
{
	char* name;
	int age;
public:
	Human(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}


	Human& operator=(const Human& ref)
	{
		delete[]name;

		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}


	void printHuman() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Human()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Human man1("�̼���", 50);
	Human xman("�̼���", 50);
	xman = man1;
	man1.printHuman();
	xman.printHuman();
	return 0;
}

//int main(void)
//{
//
//	Human p("�̼���", 50);
//	p.printHuman();
//	return 0;
//}