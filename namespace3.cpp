#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside Fun\n";
	}
}

namespace Infosystems
{
	void fun()
	{
		std::cout<<"Inside Fun\n";
	}
}

int main()
{
	using namespace Marvellous;
	using namespace Infosystems;
	
	//fun();          Ambiguty error
	
	Infosystems::fun();
	return 0;
}