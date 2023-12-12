#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_name()
{
	return this->name;
}

Zombie::Zombie()
{
	std::cout << "Zombie born!" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->get_name() << " is died" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
