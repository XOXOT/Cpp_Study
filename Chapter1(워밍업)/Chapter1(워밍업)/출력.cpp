#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << "\n"; //std::endl ��� ���� ���� ��� ����
	std::cout << "Hello " << "World!" << std::endl; 
	//ȭ��ǥ ������ hello world��� ���ڸ� cout�̶�� ��ü�� ����ְ� ����ض��� ��
	//cout�� printf�� ���� ���
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

