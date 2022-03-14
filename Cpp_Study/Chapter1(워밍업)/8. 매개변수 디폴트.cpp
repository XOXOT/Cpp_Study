#include <iostream>

////함수 정의를 할때 한꺼번에 디폴트 시키는 방법
// 
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl; //num 1값만 바뀜 num 2는 디폴트
//	std::cout << Adder(3, 5) << std::endl; // num1, num2 값이 전부 바뀜
//	return 0;
//}

////만약 함수의 원형을 별도로 보고싶다면 다음과 같이 디폴트 값은 함수의 원형 선언에만 위치
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

//전달되는 인자는 왼쪽부터 채워지므로, 디폴트 값은 오른쪽에서부터 채워져야함
int BoxVolume(int length, int width = 1, int height = 1);

int main()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl; //length width height 변수에 모두 적용
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl; //length width 변수에 적용
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;//length 변수에 적용
	//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;  //length 값은 디폴트 되지 않아 컴파일 에러로 이어짐 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

