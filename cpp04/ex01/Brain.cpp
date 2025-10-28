/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:34:25 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/28 03:04:52 by rlamlaik         ###   ########.fr       */
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
    for (int i = 0; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
    std::cout << "Brain: copy assinemment operator is called" << std::endl;
    return (*this);
}

Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "Brain: copy constaractor is called" << std::endl;
}

