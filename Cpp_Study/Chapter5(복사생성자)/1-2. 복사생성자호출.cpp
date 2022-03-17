#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "생성자 호출\n" << num << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout<<"복사 생성자 호출"<<endl;
	}
	void ShowData()
	{
		cout<<"num: "<<num<<endl;
	}
};
	
void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout<<"함수호출 전"<<endl;
	SimpleFuncObj(obj);
	cout<<"함수호출 후"<<endl;
	return 0;
}
