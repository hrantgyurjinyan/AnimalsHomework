#include "Pig.hpp"

#include <iostream>

Pig::Pig(int age, double weight) : Animal(age, weight) {}

void Pig::voice() const 
{
    std::cout << "Oink!" << std::endl;
}

Pig::~Pig() {}
