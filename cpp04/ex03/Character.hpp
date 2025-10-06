/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 01:47:03 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP


#include "AMateria.hpp"


class AMateria;

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria slots[4];
public:
    Character(std::string const & type);
    Character &operator=(const Character &other);
    Character (const Character& other);
    virtual ~Character();


    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, Character& target);
    
};


#endif