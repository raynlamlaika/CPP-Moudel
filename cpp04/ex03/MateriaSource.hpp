/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:56:45 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/28 03:46:19 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int learnedCount;
    AMateria* templates[4];
public:
    ~MateriaSource();
    MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource &operator=(const MateriaSource &other);

    
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

