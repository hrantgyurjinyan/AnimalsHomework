#pragma once

#include "Animal.hpp"

class Cat : public Animal 
{
public:
    Cat(int age, double weight);

    void voice() const override;

    ~Cat() override;
};

