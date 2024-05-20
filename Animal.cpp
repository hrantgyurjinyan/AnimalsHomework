#include "Animal.hpp"

Animal::Animal(int age, double weight) : age(age), weight(weight) {}

Animal::~Animal() {}

int Animal::getAge() const { return age; }

double Animal::getWeight() const { return weight; }

// Move constructor
Animal::Animal(Animal&& other) noexcept : age(other.age), weight(other.weight) 
{
    other.age = 0;
    other.weight = 0.0;
}

// Move assignment operator
Animal& Animal::operator=(Animal&& other) noexcept
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
Animal::Animal(const Animal& other) : age(other.age), weight(other.weight) {}

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

// Comparison operator
bool Animal::operator<(const Animal& other) const
{
    return age < other.age;
}

bool Animal::operator>(const Animal& other) const
{
    return age > other.age;
}

bool Animal::operator==(const Animal& other) const
{
    return age == other.age;
}
