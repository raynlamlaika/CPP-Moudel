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

#include <iostream>



class Fixed
{
    private:
        int FixedPoint;
        static const int fraction;
    public:
        Fixed() : FixedPoint(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }
        Fixed(const Fixed& other) : FixedPoint(other.FixedPoint) // we do use if that we all ready have in exiscting object
        {
            std::cout << "Copy constructor called" << std::endl;
        }
        Fixed &operator=(const Fixed& other)
        {
            std::cout << "Copy assignment operator called" << std::endl;
            if (this != &other) 
            {   // protect against self-assignment
                this->FixedPoint = other.FixedPoint;
            }
            return *this;
        }
        ~Fixed()
        {
            std::cout << "Destructor called" << std::endl;
        }

        int getRawBits( void ) const;
        void setRawBits( int const FixedPoint );



};
