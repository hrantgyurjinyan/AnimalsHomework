#pragma once

#include "Animal.hpp"

class Elephant : public Animal 
{
public:
    Elephant(int age, double weight);

    void voice() const override;

    ~Elephant() override;

    Elephant(Elephant&& other);
    Elephant& operator=(Elephant&& other) noexcept;


    Elephant(const Elephant& other);

    Elephant& operator=(const Elephant& other);
};
