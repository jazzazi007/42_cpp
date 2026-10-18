#include "Animal.hpp"

Animal::Animal() : type ("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor called for:" << type << std::endl;
}
Animal::~Animal()   
{
    std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
std::string Animal::getType() const
{
    return type;
}

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}
Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}
