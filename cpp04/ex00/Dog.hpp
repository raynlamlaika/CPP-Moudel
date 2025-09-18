/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:52:12 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/18 09:07:42 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef DOG_HPP
# define DOG_HPP


#include "Animal.hpp"



class Dog : public Animal
{
protected:
    std::string type;
public:
    Dog(); // set the name to Dog in the constractor 
    ~Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog& other);

    void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};

#endif
