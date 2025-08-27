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

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    (void)obj;
    os << obj.toFloat();
    return os;
}


int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
