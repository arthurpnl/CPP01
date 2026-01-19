#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    setName(std::string name_zombie);

    private:
        std::string _name;
};

Zombie *zombieHorde(int n, std::string name);

#endif