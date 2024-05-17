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


    Zoo(Zoo&& other) ;

    Zoo& operator=(Zoo&& other);


};
