/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:48:58 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:48:58 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <bitset>

class Fixed
{
    private:
        int                 FixedPoint;
        static const int    fraction  = 8;
    public:
        Fixed();
        Fixed(const Fixed& other) ;
        Fixed &operator=(const Fixed& other);
        Fixed(int const counter);
        Fixed(float const counter);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const &raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator==(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;



        Fixed operator+(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;

        Fixed &operator++();
        Fixed &operator--();
        Fixed operator--(int);
        Fixed operator++(int);

        static Fixed &min(Fixed &fixedPoint1, Fixed &fixedPoint2);
        static Fixed &max(Fixed &fixedPoint1, Fixed &fixedPoint2);
        static const Fixed &min(Fixed const &fixedPoint1, Fixed const &fixedPoint2);
        static const Fixed &max(Fixed const &fixedPoint1, Fixed const &fixedPoint2);

};

std::ostream &operator<<(std::ostream& os, const Fixed& obj);


#endif