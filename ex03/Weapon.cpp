#include "Weapon.hpp"

const std::string & Weapon::getType(void)
{
    std::string & type_ref = type;
    return (type_ref);
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}

Weapon::Weapon(std::string new_type)
{
    setType(new_type);
}

Weapon::~Weapon()
{
    
}

Weapon::Weapon()
{
    
}
