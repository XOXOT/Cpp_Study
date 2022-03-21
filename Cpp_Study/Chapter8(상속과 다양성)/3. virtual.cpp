#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1() //virtual�� �Է��ϸ� �Ļ��� �ڽ� Ŭ����(�������̵� ��)�� �ִ� fun1, fun2�� ��µ�
	{
		cout << "Base::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}
	void func3()
	{
		cout << "Base::func3()" << endl;
	}
};

class Derived : public Base 
{
public:
	virtual void func1() //������ �������̵��� �Ǵ� �Լ����� �ڵ������� virtual�� �Էµ� func2ó�� ���� ����
	{
		cout << "Derived::func1()" << endl;
	}
	void func2()
	{
		cout << "Derived::func2()" << endl;
	}
	void func3()
	{
		cout << "Derived::func3()" << endl;
	}
	void func4()
	{
		cout << "Derived::func4()" << endl;
	}
};

int main(void)
{
	Base b;
	Derived d;

	Base* pb = new Derived();
	pb->func1();
	pb->func2();
	pb->func3();

	return 0;
}

