/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:28:27 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/17 07:55:01 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "FragTrap.hpp"



int main()
{
    FragTrap first("dino");
    first.attack("verdeee");
    first.beRepaired(-10);
    first.beRepaired(10);
    first.beRepaired(10);
    first.beRepaired(10);
    first.takeDamage(100);
    // first.guardGate();
    first.highFivesGuys();
    first.highFivesGuys();


}