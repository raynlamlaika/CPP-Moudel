/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-07 10:09:45 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-10-07 10:09:45 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIASOURCE_HPP
# define AMATERIASOURCE_HPP

#include <iostream>
class AMateria;
class IMateriaSource
{
public:
    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;

};


#endif