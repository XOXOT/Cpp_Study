#include <iostream>

typedef struct human
{
	char name[20];
	int age;
	char job[10];

	void showdata() //구조체 안에서 직접 사용가능하므로 매개변수 필요없음 
	{
		printf("이름:%s\n나이 : %d\n직업: %s\n\n", name, age, job);
	}

}Human;



int main()
{
	Human h1 = { "홍길동", 20, "학생" };
	h1.showdata();
	//showdata(h1);
	return 0;
}