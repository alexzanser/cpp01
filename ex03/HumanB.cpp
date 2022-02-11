#include "HumanB.hpp"

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " 
    << this->my_Weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon new_weapon)
{
    my_Weapon = new_weapon;
}

HumanB::HumanB(std::string new_name, Weapon new_weapon)
{
    name = new_name;
    setWeapon(new_weapon);
}

HumanB::HumanB(std::string new_name)
{
    name = new_name;
}
