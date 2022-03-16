#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char * name;
	int age;
public:
	Person(const char * myname, int myage) //const를 안넣으면 에러가 남
	{
		int len=strlen(myname)+1;
		name=new char[len];
		strcpy(name, myname);
		age=myage;
	}

	void ShowPersonInfo() const
	{
		cout<<"이름: "<<name<<endl;
		cout<<"나이: "<<age<<endl;
	}
	
	~Person()
	{
		delete []name; //name이 배열이므로 배열 형태로 해제시켜줌
		cout<<"called destructor!"<<endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}