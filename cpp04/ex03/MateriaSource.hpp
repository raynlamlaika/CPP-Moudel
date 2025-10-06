/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 02:39:33 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:40:47 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP


#include "AMateria.hpp"


class AMateria;

class MateriaSource : public IMateriaSource
{

public:
    MateriaSource(std::string const & type);
    MateriaSource &operator=(const MateriaSource &other);
    MateriaSource (const MateriaSource& other);
    virtual ~MateriaSource();


    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    
};


#endif