#include <iostream>
using namespace std;


//int main(void)
//{
//	int arr[3] = { 1,2,3 };
//	cout << arr[-1] << endl; //���˻縦 ���� �ʾ� ������ ���� ����
//
//
//	return 0;
//}

////smart point 
//
//class AAA
//{
//public:
//	AAA()
//	{
//		cout << "AAA ������" << endl;
//	}
//	~AAA()
//	{
//		cout << "AAA �Ҹ���" << endl;
//	}
//
//	void func()
//	{
//		cout << "AAA :: func()" << std::endl;
//	}
//};
//
//int main(void)
//{
//	//unique_ptr<AAA> ptr1 = make_unique<AAA>();
//	//ptr1->func();
//
//	// <   > �� ���ø����� �ڷ����� ������� ������ Ʋ�̴�. 
//	shared_ptr<AAA> ptr1 = make_shared<AAA>();
//	//ptr1->func();
//	cout << "count :" << ptr1.use_count() << endl;
//
//	{
//		shared_ptr<AAA> ptr2(ptr1);
//		cout << "count :" << ptr2.use_count() << endl;
//		cout << "count :" << ptr1.use_count() << endl;
//	}
//
//	cout << "count :" << ptr1.use_count() << endl;
//
//	return 0;
//}

//Functor test 

class CTest
{
	int money;
public:
	CTest(int m = 0) :money(m) 
	{
		cout << "CTest ������" << endl;
	}
	int operator()()
	{
		return money;
	}
	void operator()(int m)
	{
		money += m;
	}

private:

};

int main(void)
{
	CTest m;
	cout << m() << endl;
	m(100);
	cout << m() << endl;
	return 0;
}