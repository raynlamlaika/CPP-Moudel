/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-31 10:35:34 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-31 10:35:34 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
from now we will always use 
• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor
*/


#include "Fixed.hpp"

Fixed::Fixed() : FixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) // we do use if that we all ready have in exiscting object
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

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (FixedPoint);
}

void Fixed::setRawBits( int const &raw )
{
    FixedPoint = raw;
}
