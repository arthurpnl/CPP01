#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
        void    complain(int level);
    private:
        void    _debug();
        void    _info();
        void    _warning();
        void    _error();
};

#endif