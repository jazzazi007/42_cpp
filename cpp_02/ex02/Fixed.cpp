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

// COMPARISON OPERATORS //

bool Fixed::operator!=(const Fixed& other)
{
    return (fixedPoint != other.fixedPoint);
}

bool Fixed::operator>(const Fixed& other)
{
    return (fixedPoint > other.fixedPoint);
}

bool Fixed::operator<(const Fixed& other)
{
    return (fixedPoint < other.fixedPoint);
}

bool Fixed::operator==(const Fixed& other)
{
    return (fixedPoint == other.fixedPoint);
}

bool Fixed::operator<=(const Fixed& other)
{
    return (fixedPoint <= other.fixedPoint);
}

bool Fixed::operator>=(const Fixed& other)
{
    return (fixedPoint >= other.fixedPoint);
}

int Fixed::operator*(const Fixed& other)
{
    return(fixedPoint * other.fixedPoint);
}

int Fixed::operator/(const Fixed& other)
{
    return(fixedPoint / other.fixedPoint);
}

int Fixed::operator+(const Fixed& other)
{
    return(fixedPoint + other.fixedPoint);
}

int Fixed::operator-(const Fixed& other)
{
    return(fixedPoint - other.fixedPoint);
}


// TODO: Implement increment operators here in Fixed.cpp
// - Pre-increment (member): increment the smallest fractional unit and return *this
//   Example implementation pattern:
//     Fixed &Fixed::operator++() { this->fixedPoint += 1; return *this; }
// - Post-increment (member): return old value then increment
//   Example implementation pattern:
//     Fixed Fixed::operator++(int) { Fixed tmp(*this); ++(*this); return tmp; }
 Fixed &Fixed::operator++() { this->fixedPoint += 1; return *this; }
 //Fixed Fixed::operator++(int) { Fixed tmp(*this); ++(*this); return tmp; }
// TODO: Implement static max overloads here
// - Non-const: Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }
// - Const: const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b ? a : b); }
//const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return ( a > b ? a : b); }
// Ensure the signatures match the declarations added to Fixed.hpp.

// NOTE: Consider that arithmetic operator implementations currently return `int`.
// For correct fixed-point arithmetic you may want to change their return types to `Fixed`
// and implement proper scaling for multiplication/division.

