#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *z = new Zombie(name);
    return (z);
}

void randomChump( std::string name )
{
    Zombie z(name);
}

int main(void)
{
    Zombie *z = newZombie("Vasya228");
    z->announce();
    randomChump("Petya322");
    randomChump("Kolya1488");
    delete z;
    return (0);
}
