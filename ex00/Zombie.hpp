#include <iostream>
#include <stdio.h>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    Zombie(std::string new_name);
    ~Zombie();
};

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string new_name)
{
    name = new_name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << name << ":  Destroyed..." << std::endl;
}

static Zombie* newZombie( std::string name );
static void randomChump( std::string name );
