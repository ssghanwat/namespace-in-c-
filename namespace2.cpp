#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside Fun\n";
	}
}
int main()
{
	using namespace Marvellous;
	fun();
	std::cout<<"Hello World";
	return 0;
}