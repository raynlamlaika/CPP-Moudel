/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:49:19 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/25 18:30:45 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP


#include <iostream>

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
    virtual ~AMateria();


    std::string const & getType() const;
    void setType(std::string type);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif