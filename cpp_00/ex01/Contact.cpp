#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}

void Contact::set_lastname(std::string lastname)
{
    this -> lastname = lastname;
}

void Contact::set_nickname(std::string nickname)
{
    this -> nickname = nickname;
}

void Contact::set_number(std::string number)
{
    this -> number = number;
}

void Contact::set_secret(std::string secret)
{
    this -> secret = secret;
}

const std::string &Contact::get_firstname(void) const
{
    return(this -> firstname);
}

const std::string &Contact::get_lastname(void) const
{
    return(this -> lastname);
}

const std::string &Contact::get_nickname(void) const
{
    return(this -> nickname);
}

const std::string &Contact::get_number(void) const
{
    return(this -> number);
}

const std::string &Contact::get_secret(void) const
{
    return(this -> secret);
}

