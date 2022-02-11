#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
    public:
        const std::string & getType(void);
        void setType(std::string new_type);
        Weapon(std::string new_type);
        Weapon();
        ~Weapon();

    private:
        std::string type;
} ;

#endif