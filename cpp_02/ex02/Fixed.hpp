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