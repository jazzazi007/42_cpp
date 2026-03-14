#include "Fixed.hpp"

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
    this->fixedPoint = op.fixedPoint;
    return(*this);
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called\n";
    return (this->fracBit);
}

void Fixed::setRawBits( const int raw )
{
    std::cout << "getRawBits member function called\n";
    this->fracBit = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}