#include <iostream>

class human //class는 은닉, 캡슐화
{
public:
	char name[20];
	int age;
	char job[10];

	////생성자 : 초기화  -> 이렇게 안에 함수를 넣어도 되고
	//void showdata() //구조체 안에서 직접 사용가능하므로 매개변수 필요없음 
	//{
	//	printf("이름:%s\n나이 : %d\n직업: %s\n\n", name, age, job);
	//}
	void showdata();
};

int main()
{
	human h1 = {"홍길동", 20, "학생"}; //구조체 처럼 바로 집어 넣지 못함
	h1.showdata();

	return 0;
}

//생성자 : 초기화 => 이렇게 외부에 따로 함수를 정의 할 수 있다.
void human :: showdata() //구조체 안에서 직접 사용가능하므로 매개변수 필요없음 
{
	printf("이름:%s\n나이 : %d\n직업: %s\n\n", name, age, job);
}