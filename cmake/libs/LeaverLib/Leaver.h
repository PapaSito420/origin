#pragma once 

#ifndef LEAVERLIB_EXPORTS 
#define LEAVERLIB_API __declspec(export)
#else
	#define LEAVERLIB_API __declspec(import)
#endif

class leaver {
	public:
	    std::string back(const std::string& name);
};