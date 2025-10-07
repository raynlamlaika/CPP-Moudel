/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:09:16 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/07 10:12:21 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP


#include "AMateria.hpp"


class AMateria;

class ICharacter
{
public:
    // ICharacter();
    // ICharacter &operator=(const ICharacter &other);
    // ICharacter (const ICharacter& other); no need tfor those cuz we can't creat object even
    virtual ~ICharacter();


    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    
};


#endif