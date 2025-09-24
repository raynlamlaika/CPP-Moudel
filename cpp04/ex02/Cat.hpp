/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:53:42 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/09/24 14:04:41 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"


class Cat : public Animal
{
private:
   Brain *thinks;
public:
    Cat(); // set the name to Cat in the constractor 
    ~Cat();

    Cat &operator=(const Cat &other);
    Cat(const Cat& other);
    
    void makeSound() const;
};





#endif