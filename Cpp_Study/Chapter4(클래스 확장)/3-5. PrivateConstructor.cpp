#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const //&����
	{
		AAA * ptr=new AAA(n); //�����Ҵ�
		return *ptr;
	}
	void ShowNum() const { cout<<num<<endl; }
	~AAA()
	{
		cout << "���� �Ҹ��� �Դϴ�" << endl; //���� ���� (���ο��� 3�� ���� �����Ƿ� �̰� ���� 3�� ���)
	}
private:
	AAA(int n) : num(n) {} //���ڸ� �ϳ� �޴� ��ü ���� �ʱ�ȭ
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1=base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2=base.CreateInitObj(12);
	obj2.ShowNum();
	
	//AAA one(1); private�� �־� ���� �ȵ�

	delete &obj1; //�Ҵ� ���� 
	delete &obj2;
	return 0;
}