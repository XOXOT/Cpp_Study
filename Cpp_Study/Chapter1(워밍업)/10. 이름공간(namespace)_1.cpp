#include <iostream>

////�Լ� ���� �� ���Ǹ� �ϳ��� 
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
//	}
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}

////�̸����� ��� �Լ� ����� ���� ����
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}
//
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom�� ������ �Լ�" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
//}

////������ �̸������� ���ǵ� �Լ� ȣ��
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace BestComImpl
//{
//	void PrettyFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	return 0;
//}
//
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	PrettyFunc();					// ���� �̸����� ���� ������ ���� �ʿ� ����
//	ProgComImpl::SimpleFunc();		// �ٸ� �̸�����
//}
//
//void BestComImpl::PrettyFunc(void)
//{
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
//}

//�̸������� ��ø
namespace Parent
{
	int num = 2;

	namespace SubOne
	{
		int num = 3;
	}
	namespace SubTwo
	{
		int num = 4;
	}
}

int main(void)
{
	std::cout << Parent::num << "\n";
	std::cout << Parent::SubOne::num << "\n";
	std::cout << Parent::SubTwo::num << "\n";
}