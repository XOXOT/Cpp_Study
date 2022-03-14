//#include <iostream>
#include <stdio.h> //확장자를 c로 하면 오류가 나지만 확장자를 cpp로 변환하면 아래의 코드가 실행됨

void func(int n1)
{
	printf("%d", n1);
}

void func(int n1, int n2)
{
	printf("%d %d", n1, n2);
}

int main(void)
{
	func(10);
	func(10, 20);

	return 0;
}
//c는 함수를 구별할 때 함수의 이름을 비교하여 동일한 이름의 함수를 사용하면 오류를 뜨게 하지만

//c++은 함수의 이름은 물론 매개변수의 타입이나 갯수까지 비교하기 때문에 이름이 같아도 실행이 된다. 