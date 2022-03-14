#include <iostream>

////함수 선언 및 정의를 하나로 
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom이 정의한 함수" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "ProgCom이 정의한 함수" << std::endl;
//	}
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}

////이름공간 기반 함수 선언과 정의 구분
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
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}

////동일한 이름공간에 정의된 함수 호출
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
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//	PrettyFunc();					// 동일 이름공간 따라서 스코프 연산 필요 없음
//	ProgComImpl::SimpleFunc();		// 다른 이름공간
//}
//
//void BestComImpl::PrettyFunc(void)
//{
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}

//이름공간의 중첩
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