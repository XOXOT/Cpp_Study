#include <iostream>

////참조자 기본
//using namespace std;
//int main(void)
//{
//	int num1 = 1020;
//	int& num2 = num1;
//
//	num2 = 3047;
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//
//	cout << "VAL: " << &num1 << endl;
//	cout << "REF: " << &num2 << endl;
//	return 0;
//}

////참조자는 무조건 선언과 동시에 변수를 참조
//using namespace std;
//
//int main(void)
//{
//	int arr[3] = { 1, 3, 5 };
//	int& ref1 = arr[0];
//	int& ref2 = arr[1];
//	int& ref3 = arr[2];
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//}

//포인트 변수의 참조자 선언
//using namespace std;
//
//int main(void)
//{
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	return 0;
//}

////call by reference p.79
//using namespace std;
//
//void SwapByRef2(int& ref1, int& ref2)
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void)
//{
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByRef2(val1, val2);
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//	return 0;
//}

//RefReturnOne p.80
using namespace std;

//int& RefRetFuncOne(int& ref)
//{
//	ref++; //num 1 = 2
//	return ref;
//}
//
//int main(void)
//{
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1); //num2 = 2, num1 = 2 
//									 //num2 앞에 &이 없으면 num1과 같지 않음
//
//	num1++; // = num1 = 3 = num2 = 3
//	num2++; // num2 = 4, num1 = 4
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

////RefReturnTwo p.85
//using namespace std;
//int& RefRetFuncOne(int& ref)
//{
//	ref++;
//	return ref;
//}
//
//int main(void)
//{
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1);
//
//	num1 += 1;
//	num2 += 100;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//RefReturnTwo p.86
using namespace std;
int RefRetFuncTwo(int& ref) //리턴이 반환이 아니라 상수 
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}

