/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:43:19 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/25 17:53:45 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
    // init slots
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
    std::cout << "Chracter : parameteres constractor" << std::endl;

}

Character::~Character()
{
    std::cout << "Character :this is the distrotor is called " << std::endl;
    // check for memory leaks
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] != NULL)
            delete this->slots[i];
    }
}
std::string const &Character::getName() const
{
    return(this->name);
}


void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] == NULL)
        {
            this->slots[i] = m;
            return ;
        }
    }
    return ;
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->slots[idx])
        {
            this->slots[idx] = NULL;
            std::cout << "unquiq the materia of index: "<< idx << std::endl;
        }
        else
        {
            std::cout << "Slot " << idx << " is already empty." << std::endl;
        }
    }
    else
        std::cout << "invalid index" << std::endl;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->slots[idx])
            this->slots[idx]->use(target);
        else
            std::cout << "Slot " << idx << " is empty, cannot use." << std::endl;
    }
    else
        std::cout << "invalid index" << std::endl;
}
