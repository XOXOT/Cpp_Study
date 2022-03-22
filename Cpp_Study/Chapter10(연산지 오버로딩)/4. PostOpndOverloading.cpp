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
	Point& operator++()  //전위증가 
	{
		xpos+=1;
		ypos+=1;
		return *this;
	}
	const Point operator++(int) //후위증가
	{
		const Point retobj(xpos, ypos);   // const Point retobj(*this);
		xpos+=1;
		ypos+=1;
		return retobj;
	}
	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref) //전위감소 //전위는 변경되고 리턴을 하기 때문에 const를 안붙임
{
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}

const Point operator--(Point &ref, int) //후위감소 (후위니까 리턴 값이 변경되면 안되니까 const) 
{
	const Point retobj(ref); //ref 복사를 한 retobj 임시 객체 생성 
	ref.xpos-=1; //3->2
	ref.ypos-=1; // 5->4 
	return retobj; //후위라서 값이 변경 안된 상태에서 반환됨 
}

int main(void)
{
	Point pos(3, 5);
	Point cpy;
	cpy=pos--;
	cpy.ShowPosition(); //3,5
	pos.ShowPosition(); //2,4

	cpy=pos++;
	cpy.ShowPosition(); 
	pos.ShowPosition();
	return 0;
}