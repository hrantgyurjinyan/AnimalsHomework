#include "amphibian.hpp"

Amphibian::Amphibian(int age, double weight, bool isAquatic, bool isTerrestrial)
    : Animal(age, weight), isAquatic(isAquatic), isTerrestrial(isTerrestrial) {}

// Move constructor
Amphibian::Amphibian(Amphibian&& other)
    : Animal(other.age, other.weight), isAquatic(other.isAquatic), isTerrestrial(other.isTerrestrial)
{
    other.age = 0;
    other.weight = 0.0;
    other.isAquatic = false;
    other.isTerrestrial = false;
}

// Move assignment operator
Amphibian& Amphibian::operator=(Amphibian&& other)
{
    if (this != &other)
    {
        age = other.age;
        weight = other.weight;
        isAquatic = other.isAquatic;
        isTerrestrial = other.isTerrestrial;

        other.age = 0;
        other.weight = 0.0;
        other.isAquatic = false;
        other.isTerrestrial = false;
    }
    return *this;
}

// Copy constructor
Amphibian::Amphibian(const Amphibian& other)
    : Animal(other), isAquatic(other.isAquatic), isTerrestrial(other.isTerrestrial) {}

// Copy assignment operator
Amphibian& Amphibian::operator=(const Amphibian& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        isAquatic = other.isAquatic;
        isTerrestrial = other.isTerrestrial;
    }
    return *this;
}
