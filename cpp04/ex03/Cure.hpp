/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:34:33 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    std::string name;

protected:


public:
    Cure(std::string const & type);
    Cure &operator=(const Cure &other);
    Cure (const Cure& other);
    virtual ~Cure();

    std::string const & getType() const;
    void setType(std::string type);

    virtual AMateria* clone() const;
    void use(ICharacter& target);
};


#endif