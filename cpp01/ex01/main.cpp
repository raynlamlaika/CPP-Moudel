/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:09:45 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:09:45 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    int i = 4;
    Zombie *fd = zombieHorde(i, "ryaha");
    for (int y = 0; y < i ; y++)
    {
        fd[y].announce();
    }
    delete []fd; // check on this how it work in the kernel level
    return 0;
}