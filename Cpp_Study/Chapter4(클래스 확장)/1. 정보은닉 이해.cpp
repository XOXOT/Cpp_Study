#include<iostream>

////RectangleFault p.150
//using namespace std;
//class Point
//{
//public:
//	int x;   // x��ǥ�� ������ 0�̻� 100����.
//	int y;   // y��ǥ�� ������ 0�̻� 100����.
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
//		cout << "�� ���: " << '[' << upLeft.x << ", ";
//		cout << upLeft.y << ']' << endl;
//		cout << "�� �ϴ�: " << '[' << lowRight.x << ", ";
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
		cout << "��� ������ �� ����" << endl;
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
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	y = ypos;
	return true;
}
