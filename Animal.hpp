#pragma once

class Animal 
{
protected:
    int age;
    double weight;

public:
    Animal(int age, double weight);
    virtual ~Animal();

    virtual void voice() const = 0;

    int getAge() const;
    double getWeight() const;

    Animal(Animal&& other);

    Animal& operator=(Animal&& other) noexcept;

    Animal(const Animal& other);

    Animal& operator=(const Animal& other);
};
