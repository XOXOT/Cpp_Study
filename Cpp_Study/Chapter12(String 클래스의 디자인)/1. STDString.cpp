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

	cout << str3.at(5) << endl; //str3의 5번째 요소를 출력해라.
	cout << str3.front() << endl; //str3의 첫번째 요소를 출력해라.
	cout << str3.back() << endl; //str3의 마지막 요소를 출력해라.
	cout << str3.size() << endl; //str3의 문자열 크기를 출력 (빈칸 포함)
	cout << str3.capacity() << endl; // str3의 실질적인 메모리 할당 공간 크기 


	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열 입니다." << endl;
	else
		cout << "동일하지 않은 문자열 입니다." << endl;

	string str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;

	return 0;
}