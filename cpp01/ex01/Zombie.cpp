#include "Zombie.hpp"

void Zombie::set_name(std::string _name)
{
    name = _name;
}


void Zombie::announce()
{   
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

