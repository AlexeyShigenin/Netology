#pragma once

#ifdef LEAVER_DYNAMIC_EXPORTS
#define LEAVER_DYNAMIC_API __declspec(dllexport)
#else
#define LEAVER_DYNAMIC_API __declspec(dllimport)
#endif

#include <iostream>

namespace Leaver_Dynamic
{
	class Leaver
	{
	protected:
		std::string name;
	public:
		LEAVER_DYNAMIC_API void leave(std::string name);
	};

}