#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string new_name, Weapon new_weapon);
        void attack(void);
        void setWeapon(Weapon new_weapon);
    private:
        std::string name;
        Weapon my_Weapon;
} ;

#endif