#pragma once

#include "Animal.hpp"

class Elephant : public Animal 
{
public:
    Elephant(int age, double weight);

    void voice() const override;

    ~Elephant() override;
};

