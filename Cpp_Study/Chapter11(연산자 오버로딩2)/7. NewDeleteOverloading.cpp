#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {  }
	friend ostream& operator<<(ostream& os, const Point& pos);

	void * operator new (size_t size)
	{
		cout<<"operator new : "<<size<<endl;
		void * adr=new char[size];
		return adr;
	}

	static void operator delete (void * adr)
	{
		cout<<"operator delete ()"<<endl;
		delete []adr;
	}

	static void Point_static();
	void Point_func();

};

void Point ::Point_static() 
{
	cout << "Point ::Point_static()" << endl;
}

void Point::Point_func()
{
	cout << "Point::Point_func()" << endl;
}

ostream& operator<<(ostream& os, const Point& pos)
{
	os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
	return os;
}

int main(void)
{
	Point * ptr=new Point(3, 4); //직접 구현한 new 
	cout<<*ptr;

	Point::Point_static(); //static은 객체와 전혀 상관이 없어 바로 호출 가능 
	//Point::Point_func(); //static이 아니라서 객체를 통해서 호출해야함 

	ptr->Point_func();//static이 아니면 이렇게 호출해야함

	delete ptr; //직접 구현한 delete 

	return 0;

} 
