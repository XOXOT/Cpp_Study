#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

//const char* Max(const char* a, const char* b)
//{
//	return strlen(a) > strlen(b) ? a : b;
//}

const char* Max(const char* a, const char* b)
{
	return strcmp(a, b) > 0 ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;
	return 0;
}