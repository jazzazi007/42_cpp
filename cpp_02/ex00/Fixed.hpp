#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator=(const Fixed& op);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( const int raw );

    private:
        int fixedPoint;
        static const int fracBit;

};

#endif