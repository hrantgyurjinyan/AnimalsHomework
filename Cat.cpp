#include "Cat.hpp"

#include <iostream>

Cat::Cat(int age, double weight) : Animal(age, weight) {}

void Cat::voice() const 
{
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {}
