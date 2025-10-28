/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:06:22 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/25 15:32:15 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP


#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class Cure : public AMateria
{
private:
    std::string name;

public:
    Cure();
    Cure(std::string const & name);
    Cure &operator=(const Cure &other);
    Cure (const Cure& other);
    virtual ~Cure();

    std::string const & getname() const;
    void setname(std::string name);

    virtual AMateria* clone() const;
    void use(ICharacter& target);
};


#endif