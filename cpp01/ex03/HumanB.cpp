/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:17:04 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:17:04 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(const std::string& name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with" << std::endl;
}

const std::string& HumanB::getName() const {
    return name;
}

const Weapon& HumanB::getWeapon() const
{
    return *weapon;
}
