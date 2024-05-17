#pragma once

#include "Animal.hpp"

class Dog : public Animal 
{
public:
    Dog(int age, double weight);

    void voice() const override;

    ~Dog() override;

    Dog(Dog&& other);

    Dog& operator=(Dog&& other);


    Dog(const Dog& other);
  
    Dog& operator=(const Dog& other);
};
