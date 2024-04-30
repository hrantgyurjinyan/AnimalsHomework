#include "Elephant.hpp"

#include <iostream>

Elephant::Elephant(int age, double weight) : Animal(age, weight) {}

void Elephant::voice() const 
{
    std::cout << "Trumpet!" << std::endl;
}

Elephant::~Elephant() {}
