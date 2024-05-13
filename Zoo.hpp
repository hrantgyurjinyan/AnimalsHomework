#pragma once

#include "Animal.hpp"
#include <vector>

class Zoo 
{
private:
    std::vector<Animal*> animals;
    static Zoo* instance;

    Zoo();

public:
    static Zoo& getInstance();

    void addAnimal(Animal* animal);

    void printAnimals() const;

    ~Zoo();

    Zoo(const Zoo&) = delete;
    Zoo& operator=(const Zoo&) = delete;
};

