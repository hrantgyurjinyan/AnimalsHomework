#pragma once

#include "amphibian.hpp"

class Frog : public Amphibian 
{
public:
    Frog(int age, double weight);
    void voice() const;
    void move() const override;
    ~Frog();
};

