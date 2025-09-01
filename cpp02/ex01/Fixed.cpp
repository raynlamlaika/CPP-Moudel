/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-31 10:36:50 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-31 10:36:50 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : FixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const counter)
{
    FixedPoint = counter;
    FixedPoint <<= fraction;
    std::cout << "Int constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

void printBinary(int value) 
{
    std::cout << std::bitset<sizeof(value) * 8 >(value) << std::endl;
}

Fixed::Fixed(float counter)
{
    int i = counter;

    FixedPoint = (int) roundf(counter * (1 << 8));
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
    return (result);
}

