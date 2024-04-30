#include "Wolf.hpp"
#include <iostream>

Wolf::Wolf(int age, double weight) : Animal(age, weight) {}

void Wolf::voice() const {
    std::cout << "Howl!" << std::endl;
}

Wolf::~Wolf() {}
