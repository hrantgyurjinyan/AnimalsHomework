#include "Animal.hpp"

Animal::Animal(int age, double weight) : age(age), weight(weight) {}

Animal::~Animal() {}

int Animal::getAge() const 
{
    return age;
}

double Animal::getWeight() const 
{
    return weight;
}
