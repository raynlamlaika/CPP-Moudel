#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{   
    private:
        Weapon  var;
        std::string  name;
        

    public:
        HumanA(const std::string& name, const Weapon& weapon);
        void attack();
        
        void setWeapon(const Weapon& weapon);
        void setName(const std::string& _name);
        const Weapon& getWeapon() const;
        const std::string& getName() const;
};



#endif