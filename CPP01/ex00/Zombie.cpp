#include "Zombie.hpp"

std::string Zombie::get_name()
{
	return this->name;
}


Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->get_name() << " is died" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
