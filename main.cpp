#include "Dog.hpp"
#include "Cat.hpp"
#include "Wolf.hpp"
#include "Elephant.hpp"
#include "Pig.hpp"
#include <vector>

#include <iostream>

int main() {
    Dog dog(3, 10.5);
    Cat cat(4, 6.9);
    Wolf wolf(5, 24.8);
    Elephant elephant(6, 1000.0);
    Pig pig(7, 15);


    std::vector<const Animal*> animals = {&dog, &cat, &wolf, &elephant, &pig};

    for (const auto& animal : animals) 
    {
        animal->voice();
    }

    std::cout << "dog age: " << dog.getAge() << std::endl;
    std::cout << "cat age: " << cat.getAge() << std::endl;
    std::cout << "wolf age: " << wolf.getAge() << std::endl;
    std::cout << "elephant age: " << elephant.getAge() << std::endl;
    std::cout << "pig age: " << pig.getAge() << std::endl;


    return 0;
}
