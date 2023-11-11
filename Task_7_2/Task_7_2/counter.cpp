//
//  counter.cpp
//  Task_7_2
//
//  Created by Andrey Menshikov on 11.11.2023.
//

#include "counter.hpp"

Counter::Counter(int initValue) {
    value =initValue ;  // инициализация счетчика
}

void Counter::increment() {
    value++;    // увеличение счетчика на 1
}

void Counter::decrement() {
    value--;    // уменьшение счетчика на 1
}

int Counter::getValue()  {
    return value; // получение текущего значения счетчика
}
