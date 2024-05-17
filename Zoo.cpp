#include "Zoo.hpp"
#include <iostream>

Zoo* Zoo::instance = nullptr;

Zoo::Zoo() {}

Zoo& Zoo::getInstance() 
{
    if (!instance)
    {
        instance = new Zoo();
    }
    return *instance;
}

void Zoo::addAnimal(Animal* animal) 
{
    animals.push_back(animal);
}

void Zoo::printAnimals() const 
{
    for (const auto& animal : animals)
    {
        std::cout << "Animal: " << typeid(*animal).name() << ", Age: " 
                  << animal->getAge() << ", Weight: " << animal->getWeight() 
                  << std::endl;
    }
}

Zoo::~Zoo() 
{
    for (auto& animal : animals)
    {
        delete animal;
    }
    animals.clear();
}

// Move constructor
Zoo::Zoo(Zoo&& other)
    : animals(std::move(other.animals))
{
    other.animals.clear();
}

// Move assignment operator
Zoo& Zoo::operator=(Zoo&& other) noexcept
{
    if (this != &other)
    {
        for (auto& animal : animals)
        {
            delete animal;
        }
        animals.clear();

        animals = std::move(other.animals);
        other.animals.clear();
    }
    return *this;
}
