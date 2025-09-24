/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:45:50 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/24 11:10:03 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: the constaractor is called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal :the destractor is called" << std::endl;

}

Animal &Animal::operator=(const Animal &other)
{
    this->type = other.type;
    std::cout << "copy assinemment operator is called" << std::endl;
    return (*this);
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;

    std::cout << "copy constaractor is called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "need to spicify the animal to make in sound" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}
