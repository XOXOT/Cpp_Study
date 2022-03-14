#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << "\n"; //std::endl 대신 개행 문자 사용 가능
	std::cout << "Hello " << "World!" << std::endl; 
	//화살표 방향은 hello world라는 문자를 cout이라는 객체에 집어넣고 출력해라라는 뜻
	//cout은 printf와 같은 기능
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

