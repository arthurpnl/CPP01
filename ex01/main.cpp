#include "Zombie.hpp"

int main(void)
{
    int i;

    i = 0;
    Zombie *tab;

    tab = zombieHorde(5, "Bob");
    while (i < 5)
    {
        tab[i].announce();
        i++;
    }
    delete[] tab;
    return 0;
}