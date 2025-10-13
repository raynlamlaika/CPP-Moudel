
#include "Character.hpp"
Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
    std::cout << "Character: constructor called for " << name << std::endl;
}

Character::Character(const Character &other)
{
    std::cout << "Character: copy constructor called for " << other.name << std::endl;
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i])
            this->slots[i] = other.slots[i]->clone(); // deep copy of AMateria
        else
            this->slots[i] = NULL;
    }
}

Character::~Character()
{
    std::cout << "Character: destructor called for " << this->name << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete (this->slots[i]);
        this->slots[i] = NULL;
    }
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character: copy assignment called for " << other.name << std::endl;

    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete this->slots[i];
            if (other.slots[i])
                this->slots[i] = other.slots[i]->clone();
            else
                this->slots[i] = NULL;
        }
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Methods                                  */
/* -------------------------------------------------------------------------- */

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Character: cannot equip a null materia." << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = m;
            std::cout << "Character: equipped materia in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "Character: all 4 slots are already full." << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Character: invalid index " << idx << std::endl;
        return;
    }

    if (this->slots[idx])
    {
        std::cout << "Character: unequipped materia from slot " << idx << std::endl;
        this->slots[idx] = NULL;
    }
    else
        std::cout << "Character: slot " << idx << " is already empty." << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
    else
        std::cout << "Character: no materia to use in slot " << idx << std::endl;
}


