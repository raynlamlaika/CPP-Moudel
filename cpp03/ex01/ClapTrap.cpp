/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:13:23 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/19 10:30:57 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constractor is called  " << std::endl;

    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destractor is called  " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->name = other.name; // they can be also itialized in the initializer Lists name(name)
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "ClapTrap Copy assignment operator called\n";
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << " can't do anything" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "attaking from:  " << this->name << " to the target " << target <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= this->hitPoints)
    {
        this->hitPoints = 0;
    }
    else
    {
        this->hitPoints = this->hitPoints - amount;
    }
    std::cout << this->name << " have a "  << amount << " of damage Point"<< std::endl;

    
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << " can't repair (no energy or dead)" << std::endl;
        return;
    }
    std::cout << this->name << " get repaired  " << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
    std::cout << this->name << " have a "  << this->energyPoints << " Point"<< std::endl;

    
}
