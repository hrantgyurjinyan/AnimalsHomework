#include "Animal.hpp"

Animal::Animal(int age, double weight) : age(age), weight(weight) {}

Animal::~Animal() {}

// Move constructor
Animal::Animal(Animal&& other)
    : age(other.age), weight(other.weight)
{
    other.age = 0;
    other.weight = 0.0;
}

// Move assignment operator
Animal& Animal::operator=(Animal&& other)
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
Animal::Animal(const Animal& other)
    : age(other.age), weight(other.weight) {}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        age = other.age;
        weight = other.weight;
    }
    return *this;
}

int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }
