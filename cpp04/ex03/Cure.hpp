

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    std::string name;

protected:


public:
    // canical fomrm 



    virtual AMateria* clone() const;
    void use(ICharacter& target);
};