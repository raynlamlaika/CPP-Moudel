/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:34:25 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/24 14:02:05 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

#include "Animal.hpp"

Brain::Brain()
{
    std::cout << "Brain: this is the constractor" << std::endl;
}


Brain::~Brain()
{
    std::cout << "Brain: this is the constractor" << std::endl;
}

Brain &Brain::operator=(const Brain& other) 
{
    *this->ideas = *other.ideas;
    std::cout << "Brain: copy assinemment operator is called" << std::endl;
    return (*this);
}

Brain::Brain(const Brain& other)
{
    *this->ideas = *other.ideas;
    std::cout << "Brain: copy constaractor is called" << std::endl;
}

