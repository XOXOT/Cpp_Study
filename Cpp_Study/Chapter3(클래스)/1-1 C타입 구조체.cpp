#include <iostream>

typedef struct human
{
	char name[20];
	int age;
	char job[10];
}Human;

void showdata(Human ah)
{
	printf("이름:%s, 나이 : %d, 직업: %s", ah.name, ah.age, ah.job);
}

int main()
{
	Human h1 = { "홍길동", 20, "학생" };
	showdata(h1);
	return 0;
}