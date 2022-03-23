//정리 문제
//
//step1. char 포인트형 name, int형 age를 멤버변수로 출력을 담당하는 
//		printHuman()을 멤버함수로 가지는 Human 클래스를 디자인하시오. 
//
//step2. name을 동적할당을 하고, Human man("이순신", 50) 객체를 생성하시오.
//
//step3. Human man1(man) 명령이 가능하게 코드를 수정하시오.
//
//step4. Human xman 객체를 생성하고 xman = man 실행을 시키시오. 

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
//		cout << "이름 :" << name << " , " << "나이 :" << age << endl;
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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Human()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Human man1("이순신", 50);
	Human xman("이순신", 50);
	xman = man1;
	man1.printHuman();
	xman.printHuman();
	return 0;
}

//int main(void)
//{
//
//	Human p("이순신", 50);
//	p.printHuman();
//	return 0;
//}