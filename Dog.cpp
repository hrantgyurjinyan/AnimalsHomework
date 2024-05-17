#include "Dog.hpp"
#include <iostream>

Dog::Dog(int age, double weight) : Animal(age, weight) {}

void Dog::voice() const 
{
    std::cout << "Woof" << std::endl;
}

Dog::~Dog() {}

// Move constructor
Dog::Dog(Dog&& other) noexcept : Animal(std::move(other)) {}

// Move assignment operator
Dog& Dog::operator=(Dog&& other) noexcept
{
    if (this != &other)
    {
        Animal::operator=(std::move(other));
    }
    return *this;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other) {}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}
