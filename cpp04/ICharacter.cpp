/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:09:19 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/13 13:39:34 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

// ICharacter::ICharacter()
// {
//     std::cout << "ICharacter: constractor called for ICharacter named: " << this->name << std::endl;
// }



// ICharacter::ICharacter(const ICharacter &other)
// {
//     std::cout << "ICharacter: copy constructor called" << std::endl;
// }

// ICharacter &ICharacter::operator=(const ICharacter &other)
// {
//     std::cout << "ICharacter: copy assignment operator called" << std::endl;
//     *this = other;
//     return *this;
// }

ICharacter::~ICharacter()
{
    std::cout << "ICharacter: destructor called for ICharacter named: "<< std::endl;
}


