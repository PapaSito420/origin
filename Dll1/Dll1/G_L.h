#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <string>
#include <iostream>


class DLL1_API Greed {
public:
	 std::string back(const std::string & name);
};

