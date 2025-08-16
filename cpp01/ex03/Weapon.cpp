/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:17:19 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:17:19 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string& _Type) : type(_Type) {}


const std::string& Weapon::getType() const
{
    return type;
}


void Weapon::setType(const std::string& _Type)
{
    type = _Type;
}   


