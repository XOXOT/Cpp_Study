#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "������ ȣ��\n" << num << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout<<"���� ������ ȣ��(const SoSimple& copy)"<<endl;
	}
	SoSimple& AddNum(int n)
	{
		num+=n;
		return *this;
	}
	void ShowData()
	{
		cout<<"num: "<<num<<endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout<<"return ����"<<endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	//ǥ������ �ؿ� �̰Ͱ�
	//SimpleFuncObj(obj).AddNum(30).ShowData();
	
	//�̰Ͱ� ��� ���� ����. 
	SimpleFuncObj(obj);
	obj.AddNum(30);
	obj.ShowData();
	return 0;
}
