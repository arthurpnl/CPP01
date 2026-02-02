#include "Harl.hpp"

void    Harl::_debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::_info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl; 
}

void    Harl::_warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(int level) 
{
	switch (level)
	{
		case 0:
			Harl::_debug();
			Harl::_info();
			Harl::_warning();
			Harl::_error();
			break;
		case 1:
			Harl::_info();
			Harl::_warning();
			Harl::_error();
			break;
		case 2:
			Harl::_warning();
			Harl::_error();
			break;
		case 3:
			Harl::_error();
			break;
		default:
			std::cout << "No Valid Level.\n";
			break;
	}
}