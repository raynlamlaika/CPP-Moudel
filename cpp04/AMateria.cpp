/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:50:41 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/13 13:23:59 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->Type = "default";
    std::cout << "AMateria: constructor called for type " << this->Type << std::endl;
}
AMateria::AMateria(std::string const &type) : Type(type)
{
    std::cout << "AMateria: constructor called for type " << this->Type << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria: copy constructor called" << std::endl;
    this->Type = other.Type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria: destructor called for type " << this->Type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria: copy assignment operator called" << std::endl;
    if (this != &other)
        this->Type = other.Type;
    return *this;
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
    (void)target;
    std::cout << "AMateria: use method called on target" << std::endl;
}
