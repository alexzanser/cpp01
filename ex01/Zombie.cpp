#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *Horde = new Zombie[10];
    for (int i = 0; i < N ; i++)
        Horde[i].set_name(name);
    return (Horde);
}

int main(void)
{
    Zombie *Horde = zombieHorde(10, "Zombie");
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ": ";
        Horde[i].announce();
    }
    delete [] Horde;
    return (0);
}
