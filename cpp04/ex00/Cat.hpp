/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:53:42 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/23 17:57:34 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal
{
protected:
    std::string type;

public:
    Cat(); // set the name to Cat in the constractor 
    ~Cat();
    Cat(std::string name);

    Cat &operator=(const Cat &other);
    Cat(const Cat& other);

    void makeSound() const;
};


class A : public Cat 
{

   
    public:
    
       void makeSound() const{
        std::cout << "hello from A rrrrr" << std::endl;
    };
};








#endif