#include <iostream>
using namespace std;

void Counter()
{
	static int cnt; // 1 2 3 4 5 6 7 8 9 10
	//int cnt = 0; 일반적인 지역변수여서 계속 동일한 값을 가짐. 1 1 1 1 1 1...
	cnt++;
	cout<<"Current cnt: "<<cnt<<endl;
}
	
int main(void)
{
	for(int i=0; i<10; i++)
		Counter();
	return 0;
}
