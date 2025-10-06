/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:37:52 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:28:21 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"






Character::Character (const Character& other)
{
    std::cout << "Character: the constaractor is called" << std::endl;
    
}

Character::~Character()
{
    std::cout << "Character: the destractor is called" << std::endl;
    
}
Character::Character(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
    std::cout << "Character: the constaractor is called" << std::endl;
}
Character &Character::operator=(const Character &other)
{
    
}




std::string const &Character::getName() const
{
    return(this->name)
}
void Character::equip(AMateria* m)
{
    for (int  i=0 ; i<4 ;i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = m
            return ;
        }
    }
    std::cout << "you did use all of the 4 slots" << std::endl;
}
void Character::unequip(int idx)
{
    if (this->slots[idx])
    {
        this->slots[idx] = nullptr;
        std<<cout "unquipe of the slot in the index: " << idx << std::endl;
        return;
    }
    else
    {
        std::cout << "slot is all ready empty" << std::endl;
        return ;
    }
}
void Character::use(int idx, Character& target)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
}
