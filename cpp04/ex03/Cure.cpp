




#include "Cure.hpp"



AMateria *Cure::clone() const
{
    AMateria *i = new Cure;
    return (i);
}
void Cure::use(ICharacter& target)
{
    if (this->Type == "ice")
    {
        std::string << "shoots an ice bolt at"  <<  this->name<< std::endl;
    }
}