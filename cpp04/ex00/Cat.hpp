/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:53:42 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/28 03:02:54 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal
{

public:
    Cat();
    ~Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat& other);


    void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};





#endif