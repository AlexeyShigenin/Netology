#pragma once
#include <iostream>

namespace Greeter_Static
{
	class Greeter
	{
	protected:
		std::string name;
	public:
		void greet(std::string name);
	};

}
	