//
//  defaults.hpp
//  Task 9.3
//
//  Created by Andrey Menshikov on 18.11.2023.
//


#ifndef defaults_hpp
#define defaults_hpp
#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include <string>
using namespace std;


class Errors : public domain_error {
public:
    explicit Errors( const string& message);
};




#endif /* defaults_hpp */
