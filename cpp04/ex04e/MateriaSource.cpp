/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-07 10:13:41 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-10-07 10:13:41 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    
    for (int i = 0; i < 4; i++)
        this->slots[i] = nullptr;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other); {
    for (int i = 0; i < 4; i++)
    {
        this->slots[i] =other.slots[i];
    }
    std::cout << "MateriaSource: copy assignment operator called" << std::endl;
}


MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete slots[i];
    }
    std::cout << "MateriaSource: destroctor is called" << std::endl;
}

MateriaSource::MateriaSource (const MateriaSource& other)
{
    std::cout << "MateriaSource: copy constructor called" << std::endl;
}




void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;

    for (int i = 0; i < 4; i++) {
        if (this->_materias[i] == nullptr) {
            this->_materias[i] = m;
            return;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++) {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    }
    return nullptr;
}
