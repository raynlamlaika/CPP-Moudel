/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:25:02 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:25:02 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main( void )
// {
//     // (void)ac;
//     // Fixed a;
//     // Fixed b(a);
//     // Fixed c;
//     // c = b;
//     // std::cout << a.getRawBits() << std::endl;
//     // std::cout << b.getRawBits() << std::endl;
//     // b.setRawBits(4);
//     // std::cout << b.getRawBits() << std::endl;
//     // std::cout << c.getRawBits() << std::endl;
//     // std::cout << av[100] << std::endl;
//     // return 0;
//     Fixed a(-3f);
//     (void)a;
// }


// need to fixed later

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    (void)obj;
    os << obj.toFloat();
    return os;
}


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


Fixed Fixed::operator+(const Fixed& other) const
{
    return this->FixedPoint + other.FixedPoint;
}
Fixed Fixed::operator*(const Fixed& other) const
{
    return this->FixedPoint * other.FixedPoint;
}
Fixed Fixed::operator/(const Fixed& other) const
{
    return this->FixedPoint / other.FixedPoint;
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return this->FixedPoint - other.FixedPoint;
}




Fixed Fixed::operator++()
{
    ++FixedPoint;
    return *this;
}
Fixed Fixed::operator--()
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


int main( void ) {
    Fixed       a(12.2f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
