/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 07:43:34 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/17 07:54:21 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{

public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void highFivesGuys(void);
};







# endif