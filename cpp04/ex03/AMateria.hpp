/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/03 15:16:20 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

class ICharacter;
#include <iostream>

class AMateria
{
protected:
    std::string Type;
public:
    AMateria(std::string const & type);
    AMateria &operator=(const AMateria &other);
    AMateria (const AMateria& other);
    ~AMateria();



    
    std::string const & getType() const;
    void setType(std::string type);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};







#endif