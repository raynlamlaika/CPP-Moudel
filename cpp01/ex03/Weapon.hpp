/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:17:24 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:17:24 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


class Weapon
{   
    private:
        std::string type;
    public:
        Weapon();  // Default constructor
        Weapon(const std::string& _Type); 
        const std::string& getType() const;
        void setType(const std::string& _Type);
};





#endif