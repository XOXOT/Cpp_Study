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
	//class One�� ������ ��üŸ��
	One* pone = new One; // One�� ��ü ������ ����(�θ�) (�����Ҵ�)
	pone->one();

	One* ptwo = new Two; //������ Ÿ�Կ� ���缭 ������ ������ ���� one�� ���� ���� 
	ptwo->one();

	One* pthree = new Three;
	pthree->one();

	//Three* p3 = new Two; //�ڽ��� �θ� ����ų �� ���� - ��ü�� �����ͺ��� ũ�Ⱑ �۱� ������(������ ��������) ���� ������ Three���� Two�� ����.
 
	delete pone; //(�Ҵ� ����)
	delete ptwo;
	delete pthree;
	return 0;
}