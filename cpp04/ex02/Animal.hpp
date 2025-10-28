/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:44:35 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/02 15:06:07 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal &operator=(const Animal &other);
    Animal(const Animal& other);
    virtual ~Animal();
    
    virtual void makeSound() const = 0;
    void setType(std::string type);
    std::string getType() const;
};



#endif


