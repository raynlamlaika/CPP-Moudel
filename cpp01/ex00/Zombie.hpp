/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-14 13:52:29 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-14 13:52:29 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>



class Zombie
{
    private:
        std::string name;
        
    public:
        void announce( void );
        void set_name(std::string name );

};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
