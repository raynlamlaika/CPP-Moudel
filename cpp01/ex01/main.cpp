#include "Zombie.hpp"


int main()
{

    int i = 4;
    Zombie *fd = zombieHorde(i, "ryaha");
    for (int y = 0; y < i ; y++)
    {
        fd[y].announce();
    }
    return 0;
}