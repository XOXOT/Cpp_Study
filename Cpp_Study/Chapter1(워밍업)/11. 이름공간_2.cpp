#include <iostream>

//using 함수
//namespace Hybrid
//{
//	void HybFunc(void)
//	{
//		std::cout << "So simple function!" << std::endl;
//		std::cout << "In namespace Hybrid!" << std::endl;
//	}
//}
//using Hybrid::HybFunc; //전역변수로!
//
//void func()
//{
//	HybFunc();
//}
//
//int main(void)
//{
//	//using Hybrid::HybFunc; //구조체 선언과 비슷 하지만 main 함수에서 정의 되어있으므로 main 함수에서만 사용 가능
//	HybFunc();
//	func();
//	return 0;
//}

////using 함수를 전역변수로 사용하고 원래의 정의된 std도 생략 가능
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	int num = 20;
//	cout << "Hello World!" << endl;
//	cout << "Hello " << "World!" << endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << endl;
//	return 0;
//}

////이름 공간 별칭 지정
//using namespace std;
//
//namespace AAA
//{
//	namespace BBB
//	{
//		namespace CCC
//		{
//			int num1;
//			int num2;
//		}
//	}
//}
//
//int main(void)
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC;
//
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//	return 0;
//}

//범위지정 연산자의 또 다른 기능
int val = 100;

int simplefunc(void)
{
	int val = 20; //지역 변수
	val += 3; //지역변수 val의 값 3 증가
	::val += 7; //전역변수 val의 값 7 증가

	//하지만 지역변수와 전역변수의 변수명 동일은 아주 좋지 않아서 추천x
}
