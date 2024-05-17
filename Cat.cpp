#include "Cat.hpp"
#include <iostream>

Cat::Cat(int age, double weight) : Animal(age, weight) {}

void Cat::voice() const 
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat() {}

// Move constructor
Cat::Cat(Cat&& other)
    : Animal(other.age, other.weight)
{
    other.age = 0;
    other.weight = 0.0;
}

// Move assignment operator
Cat& Cat::operator=(Cat&& other)
{
    if (this != &other)
    {
        age = other.age;
        weight = other.weight;

        other.age = 0;
        other.weight = 0.0;
    }
    return *this;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other) {}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}
