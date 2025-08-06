#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "you can not pass in negative value " << std::endl;
        return (NULL);
    }
    
    Zombie  *zombies = new Zombie[N];
    for (int i = 0 ; i < N ; i++)
    {
        zombies[i].set_name(name);
    }

    return   (zombies);
}