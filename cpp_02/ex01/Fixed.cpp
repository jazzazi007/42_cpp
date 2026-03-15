#include "Fixed.hpp"

const int Fixed::fracBit = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& fix) : fixedPoint(fix.fixedPoint)
{
    std::cout << "Copy constructor called\n";
    return ;
}

Fixed &Fixed::operator=(const Fixed& op)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &op)
        this->fixedPoint = op.fixedPoint;
    return(*this);
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called\n";

    return (this->fixedPoint);
}

void Fixed::setRawBits( const int raw )
{
    std::cout << "getRawBits member function called\n";
    this->fixedPoint = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}