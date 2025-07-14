#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newZ =  new Zombie();
    newZ->set_name(name);
    return newZ;
}