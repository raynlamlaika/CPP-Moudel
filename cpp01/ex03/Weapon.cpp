#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string& _Type) : type(_Type) {}


const std::string& Weapon::getType() const
{
    return type;
}


void Weapon::setType(const std::string& _Type)
{
    type = _Type;
}   


