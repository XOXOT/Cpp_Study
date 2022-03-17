#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char* name;
    int age;
public:
    Person(const char myname[], int myage)  // VC++���� char* myname�� ���ڿ� ����� ���� �Է����� ���� ����
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy_s(name, len, myname);  // CodeBlock �� ��쿡��  strcpy(name, myname)�� ���
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "�̸�: " << name << endl;
        cout << "����: " << age << endl;
    }
    ~Person()
    {
        delete[] name;
        cout << "�Ҹ��� ȣ��" << endl;
    }
};


int main()
{
    Person man1("Park Hyo Won", 14);
    Person man2 = man1; // ���� ����, ����Ʈ ������ ȣ��. ��, ��� �� ��� ���縸 ����
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    system("pause"); // VC++ ������ �ʿ�

    return 0;
}