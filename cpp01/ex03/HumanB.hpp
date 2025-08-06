#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{   
    private:
        std::string name;
        Weapon* weapon; 
        

    public:
        
        HumanB(const std::string& name);
        
        
        void attack();
        
        void setWeapon(Weapon& weapon);
        void setName(const std::string& name);
        //getters
        const Weapon& getWeapon() const ;
        const std::string& getName() const;
};



#endif
