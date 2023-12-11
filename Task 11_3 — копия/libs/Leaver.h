#pragma once 

#ifndef LEAVERLIB_EXPORTS 
#define LEAVERLIB_API __declspec(dllexport)
#else
	#define LEAVERLIB_API __declspec(dllimport)
#endif
#include <string>

 class __declspec(dllexport) leaver {
	public:
		std::string back(const std::string& name);
};