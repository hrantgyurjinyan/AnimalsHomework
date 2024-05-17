#include "Pig.hpp"
#include <iostream>

Pig::Pig(int age, double weight) : Animal(age, weight) {}

void Pig::voice() const 
{
    std::cout << "Oink" << std::endl;
}

Pig::~Pig() {}

// Move constructor
Pig::Pig(Pig&& other) noexcept : Animal(std::move(other)) {}

// Move assignment operator
Pig& Pig::operator=(Pig&& other) noexcept
{
    if (this != &other)
    {
        Animal::operator=(std::move(other));
    }
    return *this;
}

// Copy constructor
Pig::Pig(const Pig& other) : Animal(other) {}

// Copy assignment operator
Pig& Pig::operator=(const Pig& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}
