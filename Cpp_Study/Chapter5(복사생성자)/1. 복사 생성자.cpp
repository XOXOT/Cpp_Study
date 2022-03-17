#include <iostream>
using namespace std;

//int main()
//{
//	//초기화 차이
//	
//	//c 초기화
//	int num = 10;
//	int num1;
//	num1 = 12;
//
//	//c++ 초기화
//	int num2(100);
//
//	cout << num << endl;
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//	return 0;
//}

//classinit p.216
class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		cout << "인자 2개 갖는 생성자 호출" << endl;
	}

	//SoSimple(SoSimple& copy) //복사 생성자를 주석처리해도 디폴트로 제공해줘서 실행이 잘된다.
	//	: num1(copy.num1), num2(copy.num2)
	//{
	//	cout << "복사 생성자 호출(SoSimple &copy)" << endl;
	//}

	//원본을 변경시키는 것은 복사의 개념을 무너뜨리니 const를 삽입하는 것이 좋음
	SoSimple(const SoSimple& copy) //복사 생성자를 주석처리해도 디폴트로 제공해줘서 실행이 잘된다.
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "복사 생성자 호출(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}