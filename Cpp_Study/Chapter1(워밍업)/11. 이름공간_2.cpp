#include <iostream>

//using �Լ�
//namespace Hybrid
//{
//	void HybFunc(void)
//	{
//		std::cout << "So simple function!" << std::endl;
//		std::cout << "In namespace Hybrid!" << std::endl;
//	}
//}
//using Hybrid::HybFunc; //����������!
//
//void func()
//{
//	HybFunc();
//}
//
//int main(void)
//{
//	//using Hybrid::HybFunc; //����ü ����� ��� ������ main �Լ����� ���� �Ǿ������Ƿ� main �Լ������� ��� ����
//	HybFunc();
//	func();
//	return 0;
//}

////using �Լ��� ���������� ����ϰ� ������ ���ǵ� std�� ���� ����
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

////�̸� ���� ��Ī ����
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

//�������� �������� �� �ٸ� ���
int val = 100;

int simplefunc(void)
{
	int val = 20; //���� ����
	val += 3; //�������� val�� �� 3 ����
	::val += 7; //�������� val�� �� 7 ����

	//������ ���������� ���������� ������ ������ ���� ���� �ʾƼ� ��õx
}
