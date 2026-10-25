#include "Animal.hpp"
//animal
Animal::Animal() : type ("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal constructor called for:" << type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called\n";

    if (this != &other)
        type = other.type;

    return *this;
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
//brain
Brain::Brain()
{
std::cout <<"set default brain";
}
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called\n";

    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called\n";

    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }

    return *this;
}
//dog
Dog::Dog() : Animal()
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
    : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called\n";

    if (this != &other)
    {
        Animal::operator=(other); // Copy the Animal part
        *brain = *other.brain;    // Copy the Brain contents
    }

    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}

//cat

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructor called\n";

}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called\n";

    if (this != &other)
    {
        Animal::operator=(other); // Copy the Animal part
        *brain = *other.brain;    // Copy the Brain contents
    }

    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}
