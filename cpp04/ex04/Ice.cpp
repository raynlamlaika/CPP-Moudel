/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:56:56 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/07 10:05:21 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
{
    this->name = "default";
    std::cout << "Ice: constractor called for Ice named: " << this->name << std::endl;
}

Ice::Ice(std::string const &name) : name(name)
{
    std::cout << "Ice: constructor called for type " << this->Type << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice: copy constructor called" << std::endl;
    this->name = other.name;
}

Ice::~Ice()
{
    std::cout << "Ice: destructor called for Ice named: " << this->name << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice: copy assignment operator called" << std::endl;
    if (this != &other)
        this->name = other.name;
    return *this;
}




std::string const & Ice::getname() const
{
    return (this->name);
}

void Ice::setname(std::string name)
{
    this->name = name;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}





void Ice::use(ICharacter& target)
{
    std::cout << "*shoots an ice bolt at*" << target.getName()  <<  this->name<< std::endl;

}
