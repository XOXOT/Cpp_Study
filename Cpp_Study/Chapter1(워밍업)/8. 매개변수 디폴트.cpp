#include <iostream>

////�Լ� ���Ǹ� �Ҷ� �Ѳ����� ����Ʈ ��Ű�� ���
// 
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl; //num 1���� �ٲ� num 2�� ����Ʈ
//	std::cout << Adder(3, 5) << std::endl; // num1, num2 ���� ���� �ٲ�
//	return 0;
//}

////���� �Լ��� ������ ������ ����ʹٸ� ������ ���� ����Ʈ ���� �Լ��� ���� ���𿡸� ��ġ
// 
//int Adder(int num1 = 1, int num2 = 2);
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}
//
//int Adder(int num1, int num2)
//{
//	return num1 + num2;
//}

//���޵Ǵ� ���ڴ� ���ʺ��� ä�����Ƿ�, ����Ʈ ���� �����ʿ������� ä��������
int BoxVolume(int length, int width = 1, int height = 1);

int main()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl; //length width height ������ ��� ����
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl; //length width ������ ����
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;//length ������ ����
	//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;  //length ���� ����Ʈ ���� �ʾ� ������ ������ �̾��� 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

