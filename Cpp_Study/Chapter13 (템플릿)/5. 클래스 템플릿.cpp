#include <iostream>
using namespace std;

template <typename T>
class Point
{
public:
	Point(T x=0, T y=0): xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

private:
	T xpos, ypos;
};

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');
	pos3.ShowPosition();

	return 0;
}