/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:28:27 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/17 11:35:25 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ClapTrap.hpp"



int main()
{
    ClapTrap first("dino");
   
    // first.attack("verdeee");
    // first.beRepaired(10);
    // first.beRepaired(10);
    // first.beRepaired(10);
    // first.beRepaired(10);
    // first.takeDamage(100);
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.attack("bob");
    first.takeDamage(5);
    first.takeDamage(5);
    first.takeDamage(5);

    ClapTrap second(first);
}