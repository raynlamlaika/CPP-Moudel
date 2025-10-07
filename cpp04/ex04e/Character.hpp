/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-07 10:42:48 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-10-07 10:42:48 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character: public ICharacter  
{
private:
    std::string _name;
    AMateria* _inventory[4];
public:
    Character();
    Character &operator=(const Character &other);
    Character(std::string const & name);
    Character (const Character& other);
    virtual ~Character();


    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    
};


#endif