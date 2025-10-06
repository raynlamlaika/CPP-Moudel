/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:37:23 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:34:17 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include "ICharacter.hpp"


Cure::~Cure()
{
    std::cout << "Cure: the destractor is called" << std::endl;
    
}
Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure: copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure::Cure(std::string const & type)
{
    
}
std::string const & Cure::getType() const
{
    return (this->Type);
}

void Cure::setType(std::string type)
{
    this->Type = type;
}



AMateria *Cure::clone() const
{
    return new Cure(*this);
}





void Cure::use(ICharacter& target)
{

    std::string <<  "* heals " << target.getName() <<"'s wounds *"<< std::endl;

}

