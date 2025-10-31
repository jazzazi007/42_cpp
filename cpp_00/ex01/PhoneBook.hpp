#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    private:
    Contact contact[8];
    int next_idx;
    int size;

    public:
    PhoneBook(): next_idx(0), size(0){}
    void add_contact(std::string data[5]);
    int get_size(void) const;
    void display_contact(int i) const;
    void display_phonebook(void) const;


};

#endif