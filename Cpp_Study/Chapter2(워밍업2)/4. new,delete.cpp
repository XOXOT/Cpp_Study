#include <iostream>
#include <string.h>
#include <stdlib.h>

//memmalfree p.91
using namespace std;
char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}

////newdelete p.92
////stdlib.h�� �ʿ����
//
//using namespace std;
//char* MakeStrAdr(int len)
//{
//	// char * str=(char*)malloc(sizeof(char)*len);
//	char* str = new char[len];
//	return str;
//}
//
//int main(void)
//{
//	char* str = MakeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout << str << endl;
//	// free(str);
//	delete[]str;
//	return 0;
//}

//newobject p.92
////stdlib.h�� �ʿ����

using namespace std;
class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}

//c��� ǥ���Լ� ȣ���� .h�� �Ǿտ� c�� ��� �ٿ��� ex) <stdio.h> => <cstdio>