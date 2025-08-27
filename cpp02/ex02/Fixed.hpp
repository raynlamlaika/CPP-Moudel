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
        int FixedPoint;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed& other) ; // we do use if that we all ready have in exiscting object
        Fixed &operator=(const Fixed& other) ;
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

        Fixed operator++();
        Fixed operator--();
        Fixed operator--(int);
        Fixed operator++(int);

        Fixed min(int &fixedPoint1, int fixedPoint2);
        Fixed min(int const &fixedPoint1, int const &fixedPoint2);
        Fixed max(int &fixedPoint1, int &fixedPoint2);
        Fixed max(const int &fixedPoint1, const int &fixedPoint2);

};


#endif