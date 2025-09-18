/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 07:47:04 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/17 07:51:32 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "the constructor f the FragTrap is caaaaaled" << std::endl; 
}

FragTrap::~FragTrap()
{
    std::cout << "the destructor of the FragTrap is caaaled" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    // this->name = other.name;
    // this->hitPoints = other.hitPoints;
    // this->energyPoints = other.energyPoints;
    // this->attackDamage = other.attackDamage;
    std::cout << "copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy assignment operator called\n";
    return *this;
}







void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " is now in high five mode." << std::endl;
}