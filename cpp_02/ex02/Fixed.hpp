#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed(const int num);
        Fixed(const float numfloat);
        Fixed &operator=(const Fixed& op);
        bool operator==(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator!=(const Fixed& other);

        int operator+(const Fixed& other);
        int operator-(const Fixed& other);
        int operator/(const Fixed& other);
        int operator*(const Fixed& other);
        Fixed &operator++();
       // Fixed &operator++(int);
        // TODO: Add increment operators
        // - Pre-increment (member): increments the smallest fractional unit and returns *this
        //   Signature: Fixed &operator++();
        // - Post-increment (member): returns the previous value, signature takes an int
        //   Signature: Fixed operator++(int);
        // Add these declarations here and implement them in Fixed.cpp.
        // NOTE: Ensure pre-increment returns Fixed& and post-increment returns Fixed by value.

        static Fixed &max(Fixed &a, Fixed &b);
        //static const Fixed &max(const Fixed &a, const Fixed &b);
        // TODO: Add static max overloads
        // - Non-const overload: returns the larger of two non-const Fixed references
        //   Signature: static Fixed &max(Fixed &a, Fixed &b);
        // - Const overload: returns the larger of two const Fixed references
        //   Signature: static const Fixed &max(const Fixed &a, const Fixed &b);
        // Implement these in Fixed.cpp and ensure you use the existing comparison operators.
        
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( const int raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        friend std::ostream &operator<<(std::ostream &os, const Fixed &fix);


    private:
        int fixedPoint;
        static const int fracBit;

};

#endif