#include <iostream>

class human //class�� ����, ĸ��ȭ
{
public:
	char name[20];
	int age;
	char job[10];

	////������ : �ʱ�ȭ  -> �̷��� �ȿ� �Լ��� �־ �ǰ�
	//void showdata() //����ü �ȿ��� ���� ��밡���ϹǷ� �Ű����� �ʿ���� 
	//{
	//	printf("�̸�:%s\n���� : %d\n����: %s\n\n", name, age, job);
	//}
	void showdata();
};

int main()
{
	human h1 = {"ȫ�浿", 20, "�л�"}; //����ü ó�� �ٷ� ���� ���� ����
	h1.showdata();

	return 0;
}

//������ : �ʱ�ȭ => �̷��� �ܺο� ���� �Լ��� ���� �� �� �ִ�.
void human :: showdata() //����ü �ȿ��� ���� ��밡���ϹǷ� �Ű����� �ʿ���� 
{
	printf("�̸�:%s\n���� : %d\n����: %s\n\n", name, age, job);
}