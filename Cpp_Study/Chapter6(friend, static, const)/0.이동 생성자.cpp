#include <iostream>

using namespace std;

class Human
{
public:
	Human(const char *name, int age){
		strcpy(this->name, name);
		this->age = age;
		cout << "������ ȣ��" << endl;
	}
	void viewHuman()
	{
		cout << "�̸�: " << name << "\n" << "����: " << age << endl;
	}

private:
	char name[20];
	int age;
};

int main()
{
	//int num = 10;	//num - lvalue, 10 - rvalue (����� ���ʿ� �� �� ����. ������ ������ �� �� �ִ�.(�� �� ����))
	//int& rnum = num; //lvalue�� ����
	//
	////int& rrum = 10; (����� ������ �� �� ����)
	////������ &&�� �����ν� rvalueȭ �����ָ� ��� ���� ����
	//int&& rrnum = 100;

	//cout << rnum << endl;
	//cout << rrnum << endl;

	Human h1("ȫ�浿", 30);
	h1.viewHuman();

	return 0;
}