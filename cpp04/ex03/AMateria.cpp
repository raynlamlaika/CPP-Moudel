/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:10:30 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:42:28 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria (const AMateria& other)
{
    std::cout << "AMateria: the constaractor is called" << std::endl;
    
}
AMateria::~AMateria()
{
    std::cout << "AMateria: the destractor is called" << std::endl;
    
}
AMateria::AMateria(std::string const & type)
{
    
}
AMateria &AMateria::operator=(const AMateria &other)
{
    
}


std::string const & AMateria::getType() const
{
    return (this->Type);
}

void AMateria::setType(std::string type)
{
    this->Type = type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "calling the use method from the AMateria" << std::endl;
}