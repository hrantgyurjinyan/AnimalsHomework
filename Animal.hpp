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

    // Move constructor
    Animal(Animal&& other) noexcept;
    // Move assignment operator
    Animal& operator=(Animal&& other) noexcept;

    // Copy constructor
    Animal(const Animal& other);
    // Copy assignment operator
    Animal& operator=(const Animal& other);

    // Comparison operators
    bool operator<(const Animal& other) const;
    bool operator>(const Animal& other) const;
    bool operator==(const Animal& other) const;
};
