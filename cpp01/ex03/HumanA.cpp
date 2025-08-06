#include "HumanA.hpp"


HumanA::HumanA(const std::string& name, const Weapon& weapon)
    : var(weapon), name(name) {}

const Weapon& HumanA::getWeapon() const
{
    return var;
}

void HumanA::setName(const std::string& _name)
{
    name = _name;
}


const std::string& HumanA::getName() const {
    return name;
}


void HumanA::setWeapon(const Weapon& weapon)
{
    var = weapon;
}

void HumanA::attack()
{
    std::cout <<  name << " attacks with their " << var.getType() << std::endl;
}
