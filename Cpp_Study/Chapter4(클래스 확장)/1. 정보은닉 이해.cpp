#include<iostream>

////RectangleFault p.150
//using namespace std;
//class Point
//{
//public:
//	int x;   // x좌표의 범위는 0이상 100이하.
//	int y;   // y좌표의 범위는 0이상 100이하.
//};
//
//class Rectangle
//{
//public:
//	Point upLeft;
//	Point lowRight;
//
//public:
//	void ShowRecInfo()
//	{
//		cout << "좌 상단: " << '[' << upLeft.x << ", ";
//		cout << upLeft.y << ']' << endl;
//		cout << "우 하단: " << '[' << lowRight.x << ", ";
//		cout << lowRight.y << ']' << endl << endl;
//	}
//};
//
//int main(void)
//{
//	Point pos1 = { -2, 4 };
//	Point pos2 = { 5, 9 };
//	Rectangle rec = { pos2, pos1 };
//	rec.ShowRecInfo();
//	return 0;
//}

//Point p.154
#include <iostream>
#include "1. Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}
