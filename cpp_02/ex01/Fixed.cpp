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

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    this->fixedPoint = num <<fracBit;   
}

Fixed::Fixed(const float numfloat)
{
    std::cout << "Float constructor called\n";
    this->fixedPoint = roundf(numfloat * (1 << fracBit));
}

float Fixed::toFloat() const
{
    return ((float)this->fixedPoint / (1 << fracBit));
}

int Fixed::toInt() const
{
    return (this->fixedPoint >> fracBit);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return (os);
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