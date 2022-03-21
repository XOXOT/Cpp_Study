#include <iostream>
using namespace std;

class Base
{
	int num1;

public:
	Base(int an)
	{
		num1 = an;
		cout << num1<<" : Base 생성자" << endl;
	}
	virtual ~Base() //이렇게 가상 소멸자를 해줘야지 33도 소멸됨
	{
		cout << num1<<"Base 소멸자" << endl;
	}
	virtual void func() //virtual을 넣어도 33이 살아있음
	{
		cout << "Base ::func()" << endl;
	}

};

class Derived : public Base
{
	int num2;

public:
	Derived(int an1, int an2):Base(an1)
	{
		num2 = an2;
		cout << num2<< " : Derived 생성자" << endl;
	}
	~Derived()
	{
		cout << num2<< "Derived 소멸자" << endl;
	}
	void func()
	{
		cout << "Derived ::func()" << endl;
	}
};

int main(void)
{
	//Base b(1);
	//b.func();
	//Derived d(2,22);
	//d.func();

	Base* pb = new Derived(3, 33);
	pb->func();

	delete pb; //33에 대한 소멸이 안됨
	return 0;
}