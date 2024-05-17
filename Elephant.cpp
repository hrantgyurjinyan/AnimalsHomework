#include "Elephant.hpp"
#include <iostream>

Elephant::Elephant(int age, double weight) : Animal(age, weight) {}

void Elephant::voice() const 
{
    std::cout << "Trumpet" << std::endl;
}

Elephant::~Elephant() {}

// Move constructor
Elephant::Elephant(Elephant&& other) noexcept : Animal(std::move(other)) {}

// Move assignment operator
Elephant& Elephant::operator=(Elephant&& other) noexcept
{
    if (this != &other)
    {
        Animal::operator=(std::move(other));
    }
    return *this;
}

// Copy constructor
Elephant::Elephant(const Elephant& other) : Animal(other) {}

// Copy assignment operator
Elephant& Elephant::operator=(const Elephant& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}
