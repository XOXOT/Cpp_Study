#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const //&참조
	{
		AAA * ptr=new AAA(n); //동적할당
		return *ptr;
	}
	void ShowNum() const { cout<<num<<endl; }
	~AAA()
	{
		cout << "나는 소멸자 입니다" << endl; //생략 가능 (메인에서 3번 생성 했으므로 이거 또한 3번 출력)
	}
private:
	AAA(int n) : num(n) {} //인자를 하나 받는 객체 생성 초기화
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1=base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2=base.CreateInitObj(12);
	obj2.ShowNum();
	
	//AAA one(1); private에 있어 실행 안됨

	delete &obj1; //할당 해제 
	delete &obj2;
	return 0;
}