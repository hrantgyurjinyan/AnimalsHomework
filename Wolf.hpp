#pragma once

#include "Animal.hpp"

class Wolf : public Animal 
{
public:
    Wolf(int age, double weight);

    void voice() const override;

    ~Wolf() override;
};
