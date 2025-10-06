/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:38:24 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP


#include "AMateria.hpp"


class AMateria;

class ICharacter
{
public:
    ICharacter(std::string const & type);
    ICharacter &operator=(const ICharacter &other);
    ICharacter (const ICharacter& other);
    virtual ~ICharacter();


    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    
};


#endif