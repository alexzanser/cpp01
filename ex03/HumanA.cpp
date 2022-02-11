#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " 
    << this->my_Weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon new_weapon)
{
    my_Weapon = new_weapon;
}

HumanA::HumanA(std::string new_name, Weapon new_weapon)
{
    name = new_name;
    setWeapon(new_weapon);
}
