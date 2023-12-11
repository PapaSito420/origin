#include "Leaver.h"

std::string __declspec(dllexport) leaver::back(const std::string& name) {
	return "Bie, "+name+" !";
}