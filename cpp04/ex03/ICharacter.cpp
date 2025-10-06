/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:37:52 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 00:40:23 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"






ICharacter::ICharacter (const ICharacter& other)
{
    std::cout << "ICharacter: the constaractor is called" << std::endl;
    
}
ICharacter::~ICharacter()
{
    std::cout << "ICharacter: the destractor is called" << std::endl;
    
}
ICharacter::ICharacter(std::string const & type)
{
    
}
ICharacter &ICharacter::operator=(const ICharacter &other)
{
    
}

