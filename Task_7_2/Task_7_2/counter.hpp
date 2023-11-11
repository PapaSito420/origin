//
//  counter.hpp
//  Task_7_2
//
//  Created by Andrey Menshikov on 11.11.2023.
//



#ifndef COUNTER_H
#define COUNTER_H

class Counter {
public:
 
    Counter(int value);
    void increment();
    void decrement();
    int getValue() ;
private:
    int value;
};


#include <stdio.h>

#endif /* counter_hpp */
