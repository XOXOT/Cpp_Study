#include <iostream>
using namespace std;

//int main()
//{
//	//�ʱ�ȭ ����
//	
//	//c �ʱ�ȭ
//	int num = 10;
//	int num1;
//	num1 = 12;
//
//	//c++ �ʱ�ȭ
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
		cout << "���� 2�� ���� ������ ȣ��" << endl;
	}

	//SoSimple(SoSimple& copy) //���� �����ڸ� �ּ�ó���ص� ����Ʈ�� �������༭ ������ �ߵȴ�.
	//	: num1(copy.num1), num2(copy.num2)
	//{
	//	cout << "���� ������ ȣ��(SoSimple &copy)" << endl;
	//}

	//������ �����Ű�� ���� ������ ������ ���ʶ߸��� const�� �����ϴ� ���� ����
	SoSimple(const SoSimple& copy) //���� �����ڸ� �ּ�ó���ص� ����Ʈ�� �������༭ ������ �ߵȴ�.
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "���� ������ ȣ��(SoSimple &copy)" << endl;
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
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();
	return 0;
}