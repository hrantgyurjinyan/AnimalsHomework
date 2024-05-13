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
        animal->voice();
    }
}

Zoo::~Zoo() {
    for (auto& animal : animals) 
    {
        delete animal;
    }
    animals.clear();
}
