/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:56:54 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/25 18:48:47 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->learnedCount; i++)
    {
        if (this->templates[i] != NULL)
            delete this->templates[i];
    }
}

MateriaSource::MateriaSource() : learnedCount(0)
{
    for (int i = 0; i < 4; i++)
        this->templates[i] = NULL;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    // Loop through the templates we have learned
    for (int i = 0; i < this->learnedCount; i++)
    {
        // If we find a type match
        if (this->templates[i] != NULL && this->templates[i]->getType() == type)
        {
            // Return a NEW copy (a clone), NOT the template itself
            return this->templates[i]->clone();
        }
    }
    
    // If no match is found, return NULL
    return NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    
    this->learnedCount = 0;
    for (int i = 0; i < 4; i++)
        this->templates[i] = NULL;

    *this = src;
}

void MateriaSource::learnMateria(AMateria* m)
{
    
    if (m == NULL || this->learnedCount >= 4)
        return;

    for (int i = 0; i < this->learnedCount; i++)
    {
        if (this->templates[i] == m)
            return ;
    }

    this->templates[this->learnedCount] = m;
    this->learnedCount++;
}


