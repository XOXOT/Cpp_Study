#include <iostream>

int main(void)
{
	int val1;
	std::cout << "ù ��° �����Է�: ";
	std::cin >> val1; //cin�� scanf�� ���� 

	int val2;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;

	double val3;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val3; //cin�� scanf�� ���� 

	double val4;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val4;

	double result2 = val3 + val4;
	std::cout << "�����������: " << result << std::endl;
	std::cout << "�Ҽ��������: " << result2 << std::endl;

	return 0;
}