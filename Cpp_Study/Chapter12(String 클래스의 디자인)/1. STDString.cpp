#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	cout << str3.at(5) << endl; //str3�� 5��° ��Ҹ� ����ض�.
	cout << str3.front() << endl; //str3�� ù��° ��Ҹ� ����ض�.
	cout << str3.back() << endl; //str3�� ������ ��Ҹ� ����ض�.
	cout << str3.size() << endl; //str3�� ���ڿ� ũ�⸦ ��� (��ĭ ����)
	cout << str3.capacity() << endl; // str3�� �������� �޸� �Ҵ� ���� ũ�� 


	str1 += str2;
	if (str1 == str3)
		cout << "���� ���ڿ� �Դϴ�." << endl;
	else
		cout << "�������� ���� ���ڿ� �Դϴ�." << endl;

	string str4;
	cout << "���ڿ� �Է�: ";
	cin >> str4;
	cout << "�Է��� ���ڿ�: " << str4 << endl;

	return 0;
}