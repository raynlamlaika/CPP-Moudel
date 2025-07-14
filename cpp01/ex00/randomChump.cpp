#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie newZ;

    newZ.set_name(name);
    newZ.announce();
}