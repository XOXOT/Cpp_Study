#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	//int arr[10]; //벡터는 이런거 필요없음 
	//배열을 사용할 때는 벡터를 자주 사용

	vector<int> v; //std 네임스페이스도 필요함 

	for (int i = 0; i <20; i++)
	{
		v.push_back(i + 1); //스텍구조 (뒤에서 부터 집어넣음)
		printf("v[%d]=%d\n", i, v[i]);
	}

	vector<int> v1;
	v1.push_back(10); 
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//for (int i =0; i !=v1.size(); i++)
	//{
	//	v.push_back(i + 1); 
	//	printf("v[%d]=%d\n", i, v[i]);
	//}

	//vector<int>::iterator iter; //iter은 포인터(반복자) - 위치를 나타낼 수 있는 포인터

	//for (iter = v1.begin(); iter != v1.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	vector<string> s;
	vector<string>::iterator iter;

	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("bird");
	s.push_back("dog");
	s.push_back("cat");

	for (iter = s.begin(); iter != s.end(); iter++)
	{	
		if (*iter == "lion")
		{
			s.erase(iter);
			break;
		}
	}
	for (iter = s.begin(); iter != s.end(); iter++) //iter을 사용할 때는 front 대신 begin을 써야지 첫번째 원소를 가리킴
	{ //여기서 end는 마지막 원소 그 다음을 나타냄, != 대신 < 을 사용해도 무방하지만 != 기호가 무언의 약속 
		cout << *iter << endl;
	}

	cout << s.front() << endl;

	return 0;
}