/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:56:45 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/25 18:44:51 by rlamlaik         ###   ########.fr       */
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
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

