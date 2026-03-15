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
        Fixed &operator<<(const Fixed& shift);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( const int raw );
        float toFloat( void ) const;
        int toInt( void ) const;


    private:
        int fixedPoint;
        static const int fracBit;

};

#endif