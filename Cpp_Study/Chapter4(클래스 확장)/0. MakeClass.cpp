#include <iostream>


//class Ctime
//{
//public:
//	void SetTime(int ah, int am, int as)
//	{
//		hour = ah;
//		min = am;
//		sec = as;
//	}
//
//	//void GetTime() //�̷��Ը� �ϸ� ������ ������ �����ν� �Ʒ�ó�� const�� �ٿ���
//	//{
//	//	printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
//	//}
//
//	void GetTime() const
//	{
//		printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
//	}
//
//private:
//	int hour;
//	int min;
//	int sec;
//};
//
//int main()
//{
//	Ctime t; //private ������ �ٷ� �ʱ�ȭ�� ����Ŵ
//	t.SetTime(11, 22, 10);
//	t.GetTime();
//
//}

//#�����ε� �߰�
class Ctime 
{
public:

	//Ctime() //������ �����ε�
	//{
	//	hour = 11; //�ʱ�ȭ
	//	min = 22; //�ʱ�ȭ
	//	sec = 10;
	//}

	//Ctime(int n)
	//{
	//	hour = n;
	//	min = 0;
	//} 
	
	//Ctime(int n1, int n2)
	//{
	//	hour = n1;
	//	min = n2;
	//}

	Ctime(int n1 = 12, int n2 = 19, int n3 = 0)
	{
		hour = n1;
		min = n2;
		sec = n3;
	}

	void SetTime(int ah, int am, int as)
	{
		hour = ah;
		min = am;
		sec = as;
	}

	void GetTime() const
	{
		printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
	}


private:
	int hour;
	int min;
	int sec;
};

int main()
{
	Ctime t; //private ������ �ٷ� �ʱ�ȭ�� ����Ŵ
	t.GetTime(); //�����ڸ� �߰��ؼ� settime �Լ��� �Ƚᵵ �ٷ� ��� ����
	t.SetTime(12,0,0);
	t.GetTime();
}