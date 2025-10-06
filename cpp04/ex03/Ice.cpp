/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:37:52 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:36:33 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"





Ice::Ice(const Ice& other) : AMateria(other) 
{
    std::cout << "Ice: copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}


Ice::~Ice()
{
    std::cout << "Ice: the destractor is called" << std::endl;
    
}
Ice::Ice(std::string const &type)
{
    //pramtrers
}





std::string const & Ice::getType() const
{
    return (this->Type);
}

void Ice::setType(std::string type)
{
    this->Type = type;
}



AMateria *Ice::clone() const
{
    return new Ice(*this);
}





void Ice::use(ICharacter& target)
{
    std::string << "*shoots an ice bolt at*" << target.getName()  <<  this->name<< std::endl;

}
