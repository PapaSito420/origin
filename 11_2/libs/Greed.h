#pragma once
#ifdef G_LIB_EXPORTS
#define G_LIB_API __declspec(dllexport)
#else
#define G_LIB_API __declspec(dllimport)
#endif
#include <string>


class G_LIB_API Greed {
public:
	std::string back(const std::string& name);
};

