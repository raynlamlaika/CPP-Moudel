

#ifndef HEADER_HPP
# define HEADER_HPP

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
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
        void set_name(std::string name );

};


#endif



