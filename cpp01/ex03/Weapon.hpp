#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


class Weapon
{   
    private:
        std::string type;
    public:
        Weapon();  // Default constructor
        Weapon(const std::string& _Type); 
        const std::string& getType() const;
        void setType(const std::string& _Type);
};





#endif