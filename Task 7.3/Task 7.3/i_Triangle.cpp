#include "i_Triangle.hpp"

i_Triangle::i_Triangle (const string& name, int a, int b ): Triangle(name, a, b, b, acos((a / 2.0) / b) * 180 / M_PI, a, acos((a / 2.0) / b) * 180 / M_PI) {}
