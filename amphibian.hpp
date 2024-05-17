#pragma once

#include "Animal.hpp"

class Amphibian : public Animal 
{
protected:
    bool isAquatic;
    bool isTerrestrial;

public:
    Amphibian(int age, double weight, bool isAquatic, bool isTerrestrial);
    virtual void move() const = 0;

    Amphibian(Amphibian&& other);

    Amphibian& operator=(Amphibian&& other);

    Amphibian(const Amphibian& other);

    Amphibian& operator=(const Amphibian& other);
};
