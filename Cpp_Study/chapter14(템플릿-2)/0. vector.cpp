#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	//int arr[10]; //���ʹ� �̷��� �ʿ���� 
	//�迭�� ����� ���� ���͸� ���� ���

	vector<int> v; //std ���ӽ����̽��� �ʿ��� 

	for (int i = 0; i <20; i++)
	{
		v.push_back(i + 1); //���ر��� (�ڿ��� ���� �������)
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

	//vector<int>::iterator iter; //iter�� ������(�ݺ���) - ��ġ�� ��Ÿ�� �� �ִ� ������

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
	for (iter = s.begin(); iter != s.end(); iter++) //iter�� ����� ���� front ��� begin�� ����� ù��° ���Ҹ� ����Ŵ
	{ //���⼭ end�� ������ ���� �� ������ ��Ÿ��, != ��� < �� ����ص� ���������� != ��ȣ�� ������ ��� 
		cout << *iter << endl;
	}

	cout << s.front() << endl;

	return 0;
}