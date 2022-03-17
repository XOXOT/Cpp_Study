#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout<<"按眉积己"<<endl;
	}
	SelfRef& Adder(int n)
	{
		num+=n;
		return *this;
	}
	SelfRef& ShowTwoNumber()
	{
		cout<<num<<endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef obj(obj); //汗荤 积己磊

	SelfRef &ref=obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
