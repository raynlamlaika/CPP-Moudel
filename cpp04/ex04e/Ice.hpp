/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:56:54 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/07 10:06:07 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"


class Ice : public AMateria
{
private:
    std::string name;


public:
    Ice();
    Ice(std::string const & type);
    Ice &operator=(const Ice &other);
    Ice (const Ice& other);
    ~Ice();

    virtual AMateria* clone() const;
    void use(ICharacter& target);

    
    std::string const &getname() const;
    void setname(std::string name);
};


#endif