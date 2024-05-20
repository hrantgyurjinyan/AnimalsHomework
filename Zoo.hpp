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
    void printThreeOldestAnimals() const;

    ~Zoo();

    // Move constructor
    Zoo(Zoo&& other) noexcept;
    // Move assignment operator
    Zoo& operator=(Zoo&& other) noexcept;

};
