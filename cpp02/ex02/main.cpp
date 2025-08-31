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

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// This function runs automatically when the program exits
__attribute__((destructor)) void at_exit() {
    char cmd[64];
    snprintf(cmd, sizeof(cmd), "leaks %d", getpid());  // run leaks on current process
    system(cmd);
}

int main( void ) {
    char *a;
    a = new 12;
    // Fixed       a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // Fixed z(-1.5f);
    // Fixed a(4.125f);

    // Fixed z(a);
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << "the max is : " << Fixed::max(a, b) << std::endl;
    // a.operator--();
    // std::cout << a << std::endl;
    // std::cout << std::bitset<32>(z.getRawBits()) << std::endl;
    // std::cout << z << std::endl;

    // std::cout << std::bitset<32>(a.getRawBits()) << std::endl;
    return 0;
}
