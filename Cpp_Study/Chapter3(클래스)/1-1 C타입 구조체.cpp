#include <iostream>

typedef struct human
{
	char name[20];
	int age;
	char job[10];
}Human;

void showdata(Human ah)
{
	printf("�̸�:%s, ���� : %d, ����: %s", ah.name, ah.age, ah.job);
}

int main()
{
	Human h1 = { "ȫ�浿", 20, "�л�" };
	showdata(h1);
	return 0;
}