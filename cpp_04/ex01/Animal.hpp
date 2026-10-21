#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal &other);
        virtual~Animal();
        Animal &operator=(const Animal &other);
        virtual void makeSound() const;
        std::string getType() const;


    protected:
        std::string type;

};

class Brain
{
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
    protected:
        std::string ideas[100];
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
    private:
        Brain *brain;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
    private:
        Brain *brain;
};


#endif