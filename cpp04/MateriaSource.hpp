#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <map>

class MateriaSource : public IMateriaSource
{
private:
    std::map<std::string, AMateria*> _materias;

public:
    MateriaSource();

    ~MateriaSource();
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};