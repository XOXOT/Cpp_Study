#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1; //cin과 scanf와 같음 

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;

	double val3;
	std::cout << "세 번째 숫자입력: ";
	std::cin >> val3; //cin과 scanf와 같음 

	double val4;
	std::cout << "네 번째 숫자입력: ";
	std::cin >> val4;

	double result2 = val3 + val4;
	std::cout << "정수덧셈결과: " << result << std::endl;
	std::cout << "소수덧셈결과: " << result2 << std::endl;

	return 0;
}