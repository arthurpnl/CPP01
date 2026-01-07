#include "Zombie.hpp"

int main(void)
{
    Zombie  *monZombie;
    std::string monZombie2 = "Deschamps";
    monZombie = newZombie("Didier");
    monZombie->announce();
    randomChump(monZombie2);
    delete monZombie;
    return (0);
}