#pragma once

#include "Animal.hpp"

class Pig : public Animal 
{
public:
    Pig(int age, double weight);

    void voice() const override;

    ~Pig() override;

    Pig(Pig&& other);

    Pig& operator=(Pig&& other);

    Pig(const Pig& other);

    Pig& operator=(const Pig& other);
};
