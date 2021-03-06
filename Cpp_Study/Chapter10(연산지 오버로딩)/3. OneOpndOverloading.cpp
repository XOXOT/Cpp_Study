#include <iostream>
using namespace std;

class Point 
{
private:
	int xpos, ypos;
public:
	//int xpos, ypos;
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl; 
	}
	Point& operator++()
	{
		xpos+=1;
		ypos+=1;
		return *this;
	}
	friend Point& operator--(Point &ref);
	friend ostream& operator <<(ostream& os, const Point& other);
};

Point& operator--(Point &ref)
{
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}

//friend를 안쓸려면 private에 int 값을 두면 안되고 public에 원소들을 집어넣어야함. 
ostream&operator <<(ostream& os, const Point&other)
{
	os <<'['<< other.xpos << ", " << other.ypos <<']'<< endl;
	return os;
}

int main(void)
{
	Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition(); 

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	//pos.ShowPosition();
	cout << pos << endl;
	return 0;
}

