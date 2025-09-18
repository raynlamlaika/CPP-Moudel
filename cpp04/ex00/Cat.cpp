/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:55:45 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/18 09:11:31 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal()
{
    this->type = "cat";

    std::cout << "the constaractor is called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "the destractor is called" << std::endl;

}
Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;

    std::cout << "copy assinemment operator is called" << std::endl;
    return (*this);
}
Cat::Cat(const Cat& other) : Animal(other)
{

    std::cout << "copy constaractor is called" << std::endl;
}
    
    
void Cat::makeSound() const
{
    if (this->type == "dog")
    {
        std::cout << "wooooof" << std::endl;
    }
    else if (this->type == "cat")
    {
        std::cout << "meeeeaw" << std::endl;
    }
}

std::string Cat::getType() const
{
    return(this->type);
}
void Cat::setType(std::string type)
{
    this->type = type;
}



