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
	Marvellous::fun();
	std::cout<<"Hello World";
	return 0;
}