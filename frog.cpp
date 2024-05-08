#include "frog.hpp"

#include <iostream>

Frog::Frog(int age, double weight) : Amphibian(age, weight, true, true) {}

void Frog::voice() const 
{
    std::cout << "Rib!" << std::endl;
}

void Frog::move() const 
{
    if (isAquatic && isTerrestrial) 
    {
        std::cout << "The frog hops and swims." << std::endl;
    } else if (isAquatic) 
    {
        std::cout << "The frog swims." << std::endl;
    } else if (isTerrestrial) 
    {
        std::cout << "The frog hops." << std::endl;
    }
}

Frog::~Frog() {}
