/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:06:24 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/07 10:08:59 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"



Cure::Cure()
{
    this->name = "default";
    std::cout << "Cure: constractor called for Cure named: " << this->name << std::endl;
}

Cure::Cure(std::string const &name) : name(name)
{
    std::cout << "Cure: constructor called for type " << this->Type << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure: copy constructor called" << std::endl;
    this->name = other.name;
}

Cure::~Cure()
{
    std::cout << "Cure: destructor called for Cure named: " << this->name << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure: copy assignment operator called" << std::endl;
    if (this != &other)
        this->name = other.name;
    return *this;
}





std::string const & Cure::getname() const
{
    return (this->name);
}

void Cure::setname(std::string name)
{
    this->name = name;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}



void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals " << target.getName() <<"'s wounds *"<< std::endl;
}
