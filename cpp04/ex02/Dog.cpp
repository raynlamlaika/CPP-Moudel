/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:00:37 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/24 14:07:37 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->thinks = new Brain;
    std::cout << "the constaractor is called" << std::endl;
}
Dog::~Dog()
{
    delete this->thinks;
    std::cout << "Dog: the destractor is called" << std::endl;

}

Dog &Dog::operator=(const Dog& other) 
{
    this->type = other.type;
    std::cout << "copy assinemment operator is called" << std::endl;
    return (*this);

}

Dog::Dog(const Dog& other): Animal(other)
{
    this->type = other.type;

    std::cout << "copy constaractor is called" << std::endl;
}

void Dog::makeSound() const
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

std::string Dog::getType() const
{
    return(this->type);
}
void Dog::setType(std::string type)
{
    this->type = type;
}
