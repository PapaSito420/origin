
#include "r_Triangle.hpp"
#include <cmath>



r_Triangle::r_Triangle(const string& name,int a, int b): Triangle (name,a, b, int(sqrt(a * a + b * b)), 90, asin(static_cast<double>(b) / sqrt(a * a + b * b)) * 180 / M_PI, 90 - asin(static_cast<double>(b) / sqrt(a * a + b * b)) * 180 / M_PI){}
