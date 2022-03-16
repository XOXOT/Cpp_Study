#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "3-2. Point.h"

class Rectangle
{
	Point upLeft;
	Point lowRight;
	//const int n; -상수화 시킬 대상이 없음

public:
	Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
	void ShowRecInfo() const;
};

#endif
