#include "Zoo.hpp"
#include <iostream>
#include <algorithm>

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

void Zoo::printThreeOldestAnimals() const
{
    if (animals.size() < 3)
    {
        std::cout << "Not enough animals to determine the three oldest." << std::endl;
        return;
    }

    std::vector<Animal*> sortedAnimals = animals;
    std::sort(sortedAnimals.begin(), sortedAnimals.end(), [](Animal* a, Animal* b) {
        return *a > *b;
    });

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Animal: " << typeid(*sortedAnimals[i]).name() << ", Age: " 
                  << sortedAnimals[i]->getAge() << ", Weight: " << sortedAnimals[i]->getWeight() 
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
Zoo::Zoo(Zoo&& other) noexcept 
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
