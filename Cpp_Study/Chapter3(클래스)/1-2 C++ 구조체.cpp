#include <iostream>

typedef struct human
{
	char name[20];
	int age;
	char job[10];

	void showdata() //����ü �ȿ��� ���� ��밡���ϹǷ� �Ű����� �ʿ���� 
	{
		printf("�̸�:%s\n���� : %d\n����: %s\n\n", name, age, job);
	}

}Human;



int main()
{
	Human h1 = { "ȫ�浿", 20, "�л�" };
	h1.showdata();
	//showdata(h1);
	return 0;
}