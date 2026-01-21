#include "Weapon.hpp"

Weapon::Weapon(std::string value) : _type(value)
{

}

const std::string &Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string newtype)
{
    _type = newtype;
}