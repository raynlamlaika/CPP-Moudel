
/*
from now we will always use 
• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor

*/

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : FixedPoint(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : FixedPoint(other.getRawBits()) // we do use if that we all ready have in exiscting object
{
    
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->FixedPoint = other.FixedPoint;
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const counter)
{
    FixedPoint = counter;
    FixedPoint <<= fraction;
    // std::cout << "Int constructor called" << std::endl;
}

void printBinary(int value) 
{
    std::cout << std::bitset<sizeof(value) * 8 >(value) << std::endl;
}

// Fixed::Fixed(float counter)
// {
//     int hh = static_cast<int>(round(counter * (1 << 8)));
    
//     int i = counter; // take the real part
//     float holder = (counter - i)+ 1;
//     int helper;
//     std::memcpy(&helper, &holder, 4); // cpy the 4 bit for represanting the mantisa
//     helper >>= 15;
    
//     std::memset((char*)(&helper) + 1, 0, 3);

//     i <<= 8;
//     FixedPoint = i + helper;
//     std::cout << "|---------- the real number----->:" << counter << std::endl;

//     printBinary(counter);
//     printBinary(FixedPoint);
//     printBinary(hh);
//     int fixed = static_cast<int>(roundf(counter * (2^fraction)));
//     std::cout << "|---------vv- the real number----->:" << fixed << std::endl;
//     printBinary(fixed);

//     std::cout << "|--------------->:" << hh << std::endl;
//     std::cout << "|--------------->:" << FixedPoint << std::endl;

//     std::cout << "float constructor called" << std::endl;
// }

Fixed::Fixed(float counter)
{
    // hh: full fixed-point using standard rounding
    // int hh = static_cast<int>(round(counter * (1 << 8)));

    // integer part
    int i = counter; 

    // fractional part approximation
    float holder = (counter - i) + 1; // approximate fractional part
    int helper;
    std::memcpy(&helper, &holder, 4);        // copy float bits
    helper >>= 15;                            // shift to approximate fractional bits
    std::memset((char*)(&helper) + 1, 0, 3); // zero upper bytes

    // combine integer and fractional part
    i <<= 8;
    FixedPoint = i + helper;

    // Print statements for comparison
    // std::cout << "\n|---------- Original float --------->: " << counter << std::endl;

    // std::cout << "|--- Binary of counter (float) ------>: ";
    // printBinary(counter);

    // std::cout << "|--- Binary of FixedPoint ----------->: ";
    // printBinary(FixedPoint);

    // std::cout << "|--- Binary of hh (standard round) -->: ";
    // printBinary(hh);

    // alternative fixed-point calculation
    int fixed = (int) roundf(counter * (1 << 8)); // it return a float may need to CAST IT 
    // std::cout << "|--- Alternative fixed-point value -->: " << fixed << std::endl;
    // std::cout << "|--- Binary of fxied (standard round) -->: ";
    // printBinary(fixed);

    // decimal values
    // std::cout << "|--- hh ----------------------------->: " << hh << std::endl;
    // std::cout << "|--- FixedPoint --------------------->: " << FixedPoint << std::endl;
    FixedPoint = fixed;
    // float b = (float)hh / (1 << 8); // not working 
    // std::cout << "|--- BACK BACK --------------------->: " << b << std::endl;


    std::cout << "float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (FixedPoint);
}

void Fixed::setRawBits( int const &raw )
{
    FixedPoint = raw;
}



int Fixed::toInt( void ) const
{
    int intger_s = FixedPoint;
    intger_s >>= fraction;
    return intger_s;
}


float Fixed::toFloat( void ) const
{
    float result = (float) FixedPoint / (1 << 8);
    // printBinary(result);

    return (result);
}

