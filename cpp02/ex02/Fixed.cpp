
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
}

Fixed::Fixed(const Fixed& other) : FixedPoint(other.getRawBits())
{
}

Fixed &Fixed::operator=(const Fixed& other)
{
    this->FixedPoint = other.FixedPoint;
    return *this;
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

// need to fixed later

bool Fixed::operator==(const Fixed& other) const
{
    return this->FixedPoint == other.FixedPoint;
}
bool Fixed::operator<=(const Fixed& other) const
{
    return this->FixedPoint <= other.FixedPoint;
}
bool Fixed::operator>=(const Fixed& other) const
{
    return this->FixedPoint >= other.FixedPoint;
}
bool Fixed::operator>(const Fixed& other) const
{
    return this->FixedPoint > other.FixedPoint;
}
bool Fixed::operator<(const Fixed& other) const
{
    return this->FixedPoint < other.FixedPoint;
}
bool Fixed::operator!=(const Fixed& other) const
{
    return this->FixedPoint != other.FixedPoint;
}




Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed tmp ;
    tmp.setRawBits(this->FixedPoint - other.FixedPoint);
    return (tmp);
}
Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed tmp ;
    tmp.setRawBits(this->FixedPoint + other.FixedPoint);
    return (tmp);
}
// still nedd to improve
Fixed Fixed::operator/(const Fixed& other) const
{
    return ((float)((float)this->FixedPoint / (float)other.FixedPoint));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed tmp;
    long firs = other.FixedPoint;
    long sec = this->FixedPoint;
    tmp.setRawBits((sec * firs) / (1 << fraction));
    return (tmp);
}


Fixed &Fixed::operator++()
{
    ++FixedPoint;
    return *this;
}
Fixed &Fixed::operator--()
{
    --FixedPoint;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --FixedPoint;
    return tmp;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++FixedPoint;
    return tmp;
}

Fixed::Fixed(int const counter)
{
    FixedPoint = counter;
    FixedPoint <<= fraction;
}

void printBinary(int value) 
{
    std::cout << std::bitset<sizeof(value) * 8 >(value) << std::endl;
}

Fixed::Fixed(float counter)
{

    int fixed = (int) roundf(counter * (1 << fraction));

    FixedPoint = fixed;
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
    float result = (float) FixedPoint / (1 << fraction);
    return (result);
}

Fixed &Fixed::min(Fixed &fixedPoint1, Fixed &fixedPoint2)
{
    if (fixedPoint1 > fixedPoint2)
        return (fixedPoint2);
    return (fixedPoint1);
}

Fixed &Fixed::max(Fixed &fixedPoint1, Fixed &fixedPoint2)
{
    if (fixedPoint1 > fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}

Fixed const &Fixed::min(Fixed const &fixedPoint1, Fixed const &fixedPoint2)
{
    if (fixedPoint1 > fixedPoint2)
        return (fixedPoint2);
    return (fixedPoint1);
}

Fixed const &Fixed::max(Fixed const &fixedPoint1, Fixed const &fixedPoint2)
{
    if (fixedPoint1 > fixedPoint2)
        return (fixedPoint1);
    return (fixedPoint2);
}
