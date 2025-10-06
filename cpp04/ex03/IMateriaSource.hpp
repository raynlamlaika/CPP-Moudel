/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/06 02:38:11 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIASOURCE_HPP
# define AMATERIASOURCE_HPP

#include <iostream>

class AMateriaSource
{
protected:
    std::string Type;
public:
    AMateriaSource(std::string const & type);
    AMateriaSource &operator=(const AMateriaSource &other);
    AMateriaSource (const AMateriaSource& other);
    ~AMateriaSource();

    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;


};







#endif