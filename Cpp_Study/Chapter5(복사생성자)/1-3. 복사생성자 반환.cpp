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
		cout<<"복사 생성자 호출(const SoSimple& copy)"<<endl;
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
	cout<<"return 이전"<<endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	//표현법이 밑에 이것과
	//SimpleFuncObj(obj).AddNum(30).ShowData();
	
	//이것과 결과 값이 같다. 
	SimpleFuncObj(obj);
	obj.AddNum(30);
	obj.ShowData();
	return 0;
}
