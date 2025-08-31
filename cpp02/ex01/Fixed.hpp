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
        std::ostream& operator<<(std::ostream& os, const Fixed& obj);

        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const &raw );

        float toFloat( void ) const;
        int toInt( void ) const;
};


#endif