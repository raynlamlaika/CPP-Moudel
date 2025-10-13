

#include "MateriaSource.hpp"





MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource: constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: destructor called" << std::endl;
    for (auto &pair : _materias)
    {
        delete pair.second;
    }
    _materias.clear();
}



void MateriaSource::learnMateria(AMateria* m)
{
    if (m)
    {
        _materias[m->getType()] = m->clone();
        std::cout << "MateriaSource: learned materia type " << m->getType() << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (_materias.find(type) != _materias.end())
    {
        std::cout << "MateriaSource: created materia of type " << type << std::endl;
        return _materias[type]->clone();
    }
    else
    {
        std::cout << "MateriaSource: materia type " << type << " not found" << std::endl;
        return NULL;
    }
}

