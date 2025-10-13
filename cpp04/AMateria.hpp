/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:49:19 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/12 19:22:46 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include "IMateriaSource.hpp"


class ICharacter;

class AMateria
{
protected:
    std::string Type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria &operator=(const AMateria &other);
    AMateria (const AMateria& other);
    ~AMateria();


    std::string const & getType() const;
    void setType(std::string type);
    virtual AMateria* clone() = 0;
    virtual void use(ICharacter& target);
};

#endif