/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:56:54 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/28 03:46:01 by rlamlaik         ###   ########.fr       */
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
    
    for (int i = 0; i < this->learnedCount; i++)
    {
        
        if (this->templates[i] != NULL && this->templates[i]->getType() == type)
        {
            return this->templates[i]->clone();
        }
        
    }

    
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
        return ;

    for (int i = 0; i < this->learnedCount; i++)
    {
        if (this->templates[i] == m)
            return ;
    }

    this->templates[this->learnedCount] = m;
    this->learnedCount++;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &other) 
{
    this->learnedCount = other.learnedCount;
    for (int i = 0; i < 4 ;i++)
    {
        if (this->templates[i])
            this->templates[i] = other.templates[i];
        else
            break ;
    }
    std::cout << "MateriaSource: copy assinemment operator is called" << std::endl;
    return (*this);
};
// MateriaSource &MateriaSource::operator=(const MateriaSource &other)
// {
//     if (this != &other) // protect against self-assignment
//     {
//         // Delete any existing templates
//         for (int i = 0; i < 4; i++)
//         {
//             if (this->templates[i])
//             {
//                 delete this->templates[i];
//                 this->templates[i] = NULL;
//             }
//         }

//         // Copy (clone) from the other
//         for (int i = 0; i < 4; i++)
//         {
//             if (other.templates[i])
//                 this->templates[i] = other.templates[i]->clone();
//             else
//                 this->templates[i] = NULL;
//         }

//         this->learnedCount = other.learnedCount;
//     }

//     std::cout << "MateriaSource: copy assignment operator is called" << std::endl;
//     return *this;
// }
