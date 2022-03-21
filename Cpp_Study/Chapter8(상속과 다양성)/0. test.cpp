#include <iostream>
using namespace std;

class One
{
public:
	void one()
	{
		cout << "One :: one()" << endl;
	}
};
class Two : public One
{
public:
	void two()
	{
		cout << "Two :: two()" << endl;
	}
};

class Three : public Two
{
public:
	void three()
	{
		cout << "Three :: three()" << endl;
	}
};



int main(void)
{
	//class One의 포인터 객체타입
	One* pone = new One; // One형 객체 포인터 생성(부모) (동적할당)
	pone->one();

	One* ptwo = new Two; //포인터 타입에 맞춰서 접근이 가능함 따라서 one만 접근 가능 
	ptwo->one();

	One* pthree = new Three;
	pthree->one();

	//Three* p3 = new Two; //자식은 부모를 가리킬 수 없음 - 객체가 포인터보다 크기가 작기 때문에(기준은 포인터형) 따라서 기준인 Three에는 Two는 없다.
 
	delete pone; //(할당 해제)
	delete ptwo;
	delete pthree;
	return 0;
}