#include "Dog.hpp"
#include <iostream>

Dog::Dog(int age, double weight) : Animal(age, weight) {}

void Dog::voice() const 
{
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {}
