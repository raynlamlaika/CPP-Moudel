/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:16:17 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:16:17 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string _name)
{
    name = _name;
}


void Zombie::announce()
{   
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

