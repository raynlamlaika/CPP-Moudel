/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-07 10:42:03 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-10-07 10:42:03 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include <iostream>

// Default constructor
Character::Character() : _name("Unnamed") {
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

// Constructor with name
Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

// Copy constructor
Character::Character(const Character &other) {
    *this = other;
}

// Copy assignment operator
Character &Character::operator=(const Character &other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; i++) {
            delete _inventory[i];  // Clean current slot
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();  // Deep copy
            else
                _inventory[i] = nullptr;
        }
    }
    return *this;
}

// Destructor
Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

// Get name
std::string const & Character::getName() const {
    return _name;
}

// Equip materia
void Character::equip(AMateria* m) {
    if (!m)
        return;

    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == nullptr) {
            _inventory[i] = m;
            return;
        }
    }
}

// Unequip materia (don’t delete it)
void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        _inventory[idx] = nullptr;
}

// Use materia
void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
}
