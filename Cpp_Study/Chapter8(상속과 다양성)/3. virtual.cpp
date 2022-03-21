#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1() //virtual을 입력하면 파생된 자식 클래스(오버라이딩 된)에 있는 fun1, fun2가 출력됨
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
	virtual void func1() //동일한 오버라이딩이 되는 함수들은 자동적으로 virtual이 입력됨 func2처럼 생략 가능
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

