#include <iostream>

////constructor1 p.170
//using namespace std;
//class SimpleClass
//{
//	int num1;
//	int num2;
//
//public:
//	//SimpleClass() //생성자 오버로딩
//	//{
//	//	num1 = 1; //초기화
//	//	num2 = 0; //초기화
//	//}
//
//	//SimpleClass(int n)
//	//{
//	//	num1 = n;
//	//	num2 = 0;
//	//}
//	//SimpleClass(int n1, int n2)
//	//{
//	//	num1 = n1;
//	//	num2 = n2;
//	//}
//
//	
//	SimpleClass(int n1=0, int n2=0)
//	{
//		num1=n1;
//		num2=n2;
//	}
//	
//
//	void ShowData() const
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//
//	return 0;
//}

//constructor2 p.172
using namespace std;
class SimpleClass
{
	int num1;
	int num2;

public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();    // 함수의 선언!
	SimpleClass mysc = sc1();
	//참고
	//SimpleClass sc1; //인자값 없는 객체 선언 (함수 선언과 구별)
	//SimpleClass mysc(sc1); 0, 0이 출력
	//
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}