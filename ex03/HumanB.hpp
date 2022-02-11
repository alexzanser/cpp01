#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string new_name, Weapon new_weapon);
        HumanB(std::string new_name);
        void attack(void);
        void setWeapon(Weapon new_weapon);
    private:
        std::string name;
        Weapon my_Weapon;
} ;

#endif