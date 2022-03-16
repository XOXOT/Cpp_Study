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
//	//void GetTime() //이렇게만 하면 변경할 소지를 줌으로써 아래처럼 const를 붙여줌
//	//{
//	//	printf("현재시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
//	//}
//
//	void GetTime() const
//	{
//		printf("현재시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
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
//	Ctime t; //private 때문에 바로 초기화를 못시킴
//	t.SetTime(11, 22, 10);
//	t.GetTime();
//
//}

//#오버로딩 추가
class Ctime 
{
public:

	//Ctime() //생성자 오버로딩
	//{
	//	hour = 11; //초기화
	//	min = 22; //초기화
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
		printf("현재시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
	}


private:
	int hour;
	int min;
	int sec;
};

int main()
{
	Ctime t; //private 때문에 바로 초기화를 못시킴
	t.GetTime(); //생성자를 추가해서 settime 함수를 안써도 바로 출력 가능
	t.SetTime(12,0,0);
	t.GetTime();
}