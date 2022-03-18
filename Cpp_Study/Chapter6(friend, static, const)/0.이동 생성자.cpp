#include <iostream>

using namespace std;

class Human
{
public:
	Human(const char *name, int age){
		strcpy(this->name, name);
		this->age = age;
		cout << "생성자 호출" << endl;
	}
	void viewHuman()
	{
		cout << "이름: " << name << "\n" << "나이: " << age << endl;
	}

private:
	char name[20];
	int age;
};

int main()
{
	//int num = 10;	//num - lvalue, 10 - rvalue (상수는 왼쪽에 올 수 없다. 하지만 변수는 올 수 있다.(둘 다 가능))
	//int& rnum = num; //lvalue만 했음
	//
	////int& rrum = 10; (상수는 참조를 할 수 없음)
	////하지만 &&을 함으로써 rvalue화 시켜주면 상수 참조 가능
	//int&& rrnum = 100;

	//cout << rnum << endl;
	//cout << rrnum << endl;

	Human h1("홍길동", 30);
	h1.viewHuman();

	return 0;
}