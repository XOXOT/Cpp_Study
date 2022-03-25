#include <iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main(void)
{
	try
	{
		SimpleFuncOne();
	}
	catch(int expn)
	{
		cout<<"예외코드: "<< expn <<endl;
	}
	return 0;
}

void SimpleFuncOne(void) 
{ 
	cout<<"SimpleFuncOne(void)"<<endl;
	SimpleFuncTwo(); 
	cout << "SimpleFuncOne END" << endl;
}
void SimpleFuncTwo(void) 
{ 
	cout<<"SimpleFuncTwo(void)"<<endl;
	SimpleFuncThree(); 
	cout << "SimpleFuncTwo END" << endl;
}
void SimpleFuncThree(void) 
{ 
	cout<<"SimpleFuncThree(void)"<<endl;
	throw -1; 
}
