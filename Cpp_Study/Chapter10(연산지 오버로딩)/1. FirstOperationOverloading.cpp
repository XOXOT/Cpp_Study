#include <iostream>
using namespace std;

class Point 
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl; 
	}

	Point add(const Point& other)
	{
		return Point(xpos + other.xpos, ypos + other.ypos);
		
	}

	Point operator+(const Point &ref)    //operator+라는 이름의 함수
	{
		Point pos(xpos+ref.xpos, ypos+ref.ypos);
		return pos;
	}               

	Point operator+ (int n)
	{
		return Point(xpos + n, ypos + n);
	}

};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	//Point pos3 = pos1.add(pos2);
	Point pos4 = pos1 + pos2; //operator +
	Point pos5 = pos1 + 100; //pos.operator+(100)


	Point pos3=pos1.operator+(pos2);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	pos5.ShowPosition();
	return 0;
}
