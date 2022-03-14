#include <iostream>

inline int SQUARE(int x) //인라인을 삭제해도 실행은 된다.
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
