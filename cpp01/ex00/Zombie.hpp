
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>



class Zombie
{
    private:
        std::string name;
        
    public:
        void announce( void );
        void set_name(std::string name );

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif



