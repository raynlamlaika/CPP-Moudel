/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:02:41 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/17 11:38:16 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constractor and destroctor will bw passsed right here
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    // this->name = name; // i think is all ready it will bw initalided on the base class
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "the constructor f the ScavTrap is caaaaaled" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "the destructor of the ScavTrap is caaaled" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    // this->name = other.name;
    // this->hitPoints = other.hitPoints;
    // this->energyPoints = other.energyPoints;
    // this->attackDamage = other.attackDamage;
    std::cout << "copy constructor called" << std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy assignment operator called\n";
    return *this;
}


void ScavTrap::guardGate()
{
    std::cout << "now " << this->name << " is in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << "can't do anything in this case" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "attaking from:  " << name << "to the target witch is: " << target <<std::endl;
    
}
