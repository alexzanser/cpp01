#include <iostream>
#include <stdio.h>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    void    set_name(std::string name);
    Zombie(std::string new_name);
    Zombie();
    ~Zombie();
};

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie()
{
    std::cout << name << ":  Destroyed..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name );
