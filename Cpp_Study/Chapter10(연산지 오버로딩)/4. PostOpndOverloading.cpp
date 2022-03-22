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
	Point& operator++()  //�������� 
	{
		xpos+=1;
		ypos+=1;
		return *this;
	}
	const Point operator++(int) //��������
	{
		const Point retobj(xpos, ypos);   // const Point retobj(*this);
		xpos+=1;
		ypos+=1;
		return retobj;
	}
	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref) //�������� //������ ����ǰ� ������ �ϱ� ������ const�� �Ⱥ���
{
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}

const Point operator--(Point &ref, int) //�������� (�����ϱ� ���� ���� ����Ǹ� �ȵǴϱ� const) 
{
	const Point retobj(ref); //ref ���縦 �� retobj �ӽ� ��ü ���� 
	ref.xpos-=1; //3->2
	ref.ypos-=1; // 5->4 
	return retobj; //������ ���� ���� �ȵ� ���¿��� ��ȯ�� 
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