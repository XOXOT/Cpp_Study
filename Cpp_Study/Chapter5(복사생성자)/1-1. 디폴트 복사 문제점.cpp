#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char* name;
    int age;
public:
    Person(const char myname[], int myage)  // VC++에서 char* myname은 문자열 상수를 직접 입력으로 받지 못함
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy_s(name, len, myname);  // CodeBlock 일 경우에는  strcpy(name, myname)을 사용
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    ~Person()
    {
        delete[] name;
        cout << "소멸자 호출" << endl;
    }
};


int main()
{
    Person man1("Park Hyo Won", 14);
    Person man2 = man1; // 얕은 복사, 디폴트 생성자 호출. 즉, 멤버 대 멤버 복사만 진행
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    system("pause"); // VC++ 에서만 필요

    return 0;
}