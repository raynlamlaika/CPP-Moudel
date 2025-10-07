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


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP


#include "AMateria.hpp"


class AMateria;

class MateriaSource : public IMateriaSource
{
private:
    AMateria* slots[4];
    AMateria* materal;

public:
    MateriaSource();
    MateriaSource &operator=(const MateriaSource &other);
    MateriaSource (const MateriaSource& other);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    
};


#endif