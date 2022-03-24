#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}


int main(void)
{
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl; //int를 생략하면 소수점까지 나옴
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}

//int main(void)
//{
//	//< > 생략해도 출력 가능
// 	cout << Add(15, 20) << endl;
//	cout << Add(2.9, 3.7) << endl;
//	cout << Add(3.2, 3.2) << endl;
//	cout << Add(3.14, 2.75) << endl;
//	return 0;
//}